/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 영상의 밝기를 증가시키는 함수-1번케이스
void brighten(Mat& img, int value) {
	Mat convert_image;
	img.convertTo(convert_image, -1, 1, value);
	imshow("new", convert_image);
}

// 영상의 밝기를 증가시키는 함수-2번케이스
void brighten2(Mat &img, int value) {
	for (int r = 0; r < img.rows; r++) {
		for (int c = 0; c < img.cols; ++c) {
			img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + value);
		}
	}
}
int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	// convertTo(n, type, alpha, beta)
	// n : n 행렬이 적절한 크기, 타입이 아니면 행렬 원소를 새로 할당함
	// type : 원하는 출력 행렬의 타입, 음수면 입력 행렬과 같은 타입 가짐
	// alpha : 추가적으로 곱할 값
	// beta : 추가적으로 더할 값
	// Mat conv_Img;
	// img.convertTo(conv_Img, -1, 1, 100); // 색상 변환, a, b값을 준다.

	// imshow("New Image", conv_Img);
	
	int bright = 0;

	while (1) {
		int key = waitKeyEx(); // 사용자로부터 키가 눌릴 때까지 기다린다.
		cout << key << " "; // 어떤 키가 눌렸는지 출력

		if (key == 49) { // 1번 누르면 밝기 증가
			brighten(img, bright += 10);
		}
		else if (key == 50) { // 2번을 누르면 루프탈출
			break;
		}
	}
	
	waitKey(0);

	return 0;
}
*/