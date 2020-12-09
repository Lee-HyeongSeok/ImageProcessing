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
	VideoCapture cap("D:/3-2�б�/����ó��-�ȼ���/������Ʈ ����/anew.mp4");
	VideoError(cap);

	
	/*
	1. ĳ��
	2. ����ȭ
	3. ����
	4. ����ũ
	5. ���� �ռ�
	*/
	Mat dst, convert_color;
	Mat frame;
	Mat fin;
	
	for (;;) {
		cap >> frame;

		// ĳ�� ���� ���� 
		Canny(frame, dst, 100, 200); 

		// ����ũ ó�� 
		Mat mask = Mat::zeros(dst.size(), dst.type());
		vector<Point> points;
		points.push_back(Point(dst.cols / 2.2, dst.rows / 2.0));
		points.push_back(Point((dst.cols / 2.1), dst.rows / 2.0));
		points.push_back(Point(dst.cols/1.5, dst.rows));
		points.push_back(Point(dst.cols / 8.8, dst.rows));
		fillConvexPoly(mask, points, Scalar(255, 255, 255));
		
		bitwise_and(dst, mask, fin);
		imshow("mask", mask);
		
		vector<Vec4i> lines;
		HoughLinesP(fin, lines, 1, CV_PI / 180, 50, 55, 5);

		// ȭ�� �� ���� 
		cvtColor(fin, convert_color, CV_GRAY2BGR);
		for (size_t i = 0; i < lines.size(); i++) {
			Vec4i l = lines[i];
			line(fin, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 1, CV_AA);
			line(convert_color, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 1, CV_AA);
			line(frame, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 1, CV_AA);
		}
		
		
		resize(frame, frame, Size(600, 400));
		resize(dst, dst, Size(600, 400));
		resize(fin, fin, Size(600, 400));
		imshow("convert", convert_color);
		imshow("origin", frame);
		imshow("fin", fin);
		imshow("dst", dst);
		
		/*
		imshow("fin", fin);
		
		imshow("mask", mask);
		imshow("frame", frame);
		imshow("dst", convert_color);
		*/
		if (waitKey(30) >= 0)
			break;
	}
	
	waitKey(0);
	return 0;
}