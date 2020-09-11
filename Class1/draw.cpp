#define _CRT_SECURE_NO_WARNING
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void ImgError(Mat img) {
	if (img.empty()) {
		cout << "not read img" << endl;
	}
}

/*
int main() {
	// row, column, 무언가의 형식, color
	Mat image = Mat(400, 600, CV_8UC3, Scalar(0, 0, 0));

	// 선 그리기
	// 대상지정, 그리는 좌표, 색상(BGR), 선의 굵기
	// opencv에서는 RGB가 아닌 BGR로 표기
	line(image, Point(100, 100), Point(300, 300), Scalar(0, 0, 255), 7);
	
	// 사각형 그리기
	// 시작점과 끝점, LeftTop, RightBottom
	rectangle(image, Point(250, 30), Point(450, 100), Scalar(0, 255, 0), 5);

	// 원 그리기
	// 원의 중심 지정, 반지름
	circle(image, Point(100, 300), 60, Scalar(255, 0, 0), 3);

	// 타원 그리기
	// 중심점, 중심점에서 가로와 세로의 길이, 각도, 시작 각도, 끝 각도, 색상, 굵기
	ellipse(image, Point(250, 300), Point(100, 60), 45, 0, 360, Scalar(255, 255, 255), 5);


	ImgError(image);
	imshow("image", image);
	waitKey(0);
	return (0);
}

*/