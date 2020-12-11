#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void VideoError(VideoCapture cap) {
	if (!cap.isOpened()) {
		printf("video error");
		return;
	}
}
int main() {
	VideoCapture cap("D:/3-2학기/영상처리-안세종/프로젝트 영상/anew.mp4");
	VideoError(cap);

	Mat dst; 
	Mat frame;
	Mat fin;
	Mat gray;
	
	for (;;) {
		cap >> frame;

		cvtColor(frame, gray, COLOR_BGR2GRAY);

		// 캐니 에지 연산자로 
		//Canny(frame, dst, 100, 200);
		Canny(gray, dst, 100, 200);

		// 마스크 처리 
		// 캐니 에지로 검출된 dst의 사이즈와 타입과 같은 매트릭스 선언 
		Mat mask = Mat::zeros(dst.size(), dst.type());

		// 포인트 벡터에 선을 검출할 마스크 좌표를 삽입 
		vector<Point> points;
		points.push_back(Point(dst.cols / 2.2, dst.rows / 2.0));
		points.push_back(Point((dst.cols / 2.1), dst.rows / 2.0));
		points.push_back(Point(dst.cols/1.5, dst.rows));
		points.push_back(Point(dst.cols / 8.8, dst.rows));

		// 마스크 포인트 부분을 제외한 모든 부분을 검은색으로 만듬 
		fillConvexPoly(mask, points, Scalar(255, 255, 255));
		
		// 캐니 에지로 검출된 매트릭스와 마스크 AND 연산 
		// 결과는 fin 매트릭스에 저장
		bitwise_and(dst, mask, fin);
		imshow("mask", mask);

		// 화소 색 변경 
		//cvtColor(fin, convert_color, CV_GRAY2BGR);
		
		// 캐니 에지 AND 마스크 영상에 허프 변환으로 직선 검출 
		vector<Vec4i> lines;
		HoughLinesP(fin, lines, 1, CV_PI / 180, 50, 55, 5);

		// 검출된 직선을 line 함수를 통해 그려준다.
		for (size_t i = 0; i < lines.size(); i++) {
			Vec4i l = lines[i];
			line(frame, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 1, CV_AA);
		}
		
		resize(frame, frame, Size(600, 400));
		resize(dst, dst, Size(600, 400));
		resize(fin, fin, Size(600, 400));
		
		imshow("gray", gray);
		imshow("origin", frame);
		imshow("fin", fin);
		imshow("dst", dst);
		
		if (waitKey(30) >= 0)
			break;
	}
	
	waitKey(0);
	return 0;
}