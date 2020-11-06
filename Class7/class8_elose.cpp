#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat src, dst, open, close;
	src = imread("D:/3-2학기/영상처리-안세종/images/letterj.png", IMREAD_GRAYSCALE);

	Mat saltpepper_noise = Mat::zeros(src.rows, src.cols, CV_8U);
	randu(saltpepper_noise, 0, 255);

	Mat black = saltpepper_noise < 30;
	Mat white = saltpepper_noise > 225;

	// 원본 영상 복사
	Mat saltpepper_img = src.clone();

	// 원본 영상에 노이즈 추가
	saltpepper_img.setTo(255, white);
	saltpepper_img.setTo(0, black);
	imshow("src", saltpepper_img);

	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3));
	morphologyEx(saltpepper_img, open, MORPH_OPEN, element); // 열림 연산 수행(침식->팽창)
	imshow("opening demo", open);

	// 노이즈가 조금 더 침식된다.
	morphologyEx(open, close, MORPH_CLOSE, element); // 닫힘 연산 수행(팽창 -> 침식)
	imshow("closing demo", close);
	waitKey(0);
	return 0;
}