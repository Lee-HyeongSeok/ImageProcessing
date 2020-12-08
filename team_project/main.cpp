#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	VideoCapture cap("D:/3-2학기/영상처리-안세종/프로젝트 영상/주간도로주행.mp4");
	if (!cap.isOpened())
		return -1;

	/*
	1. 캐니
	2. 이진화
	3. 허프
	4. 마스크
	5. 영상 합성
	*/
	for (;;) {
		Mat dst, convert_color;
		Mat frame;
		cap >> frame;
		Canny(frame, dst, 100, 200); // 캐니 에지 검ㅁ출 
		imshow("canny", dst);
	
		cvtColor(dst, convert_color, CV_GRAY2BGR);
		imshow("convert", convert_color);
		vector<Vec4i> lines;
		HoughLinesP(dst, lines, 1, CV_PI / 180, 100, 100, 10);
		for (size_t i = 0; i < lines.size(); i++) {
			Vec4i l = lines[i];
			line(convert_color, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 1, CV_AA);
		}
		resize(frame, frame, Size(600, 400));
		resize(convert_color, convert_color, Size(600, 400));
		imshow("frame", frame);
		imshow("dst", convert_color);
		if (waitKey(30) >= 0)
			break;
	}
	waitKey(0);
	return 0;
}