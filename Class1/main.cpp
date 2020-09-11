#define _CRT_SECURE_NO_WARNING

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void ImgResource(Mat img) {
	if (img.empty()) {
		cout << "not read img" << endl;
	}
}

// 이미지 색상 변경 메소드
// 인자 1 : 변경 대상 img
// 인자 2 : 변경 후 저장할 img

void convert_img_Gray(Mat img1, Mat img2) {
	cvtColor(img1, img2, CV_BGR2GRAY); // 이미지 색상 변환
	imshow("gray", img2); // 화면에 변환된 이미지 출력
	imwrite("d:/gray.jpg", img2); // 이미지 쓰기
}
int main() {
	Mat image; // Mat : image, 영상을 다루는 변수 자료형
	image = imread("D:/kimminsuByeongsin.jpg", IMREAD_COLOR);
	ImgResource(image);
	imshow("image", image); // image 불러오기

	Mat gray, edge, output;
	convert_img_Gray(image, gray); // 이미지 색상 변경 메소드로 인자 전달

	waitKey(0); // 어떤 키를 누를 때 까지 기다리는 함수, 바로 꺼짐 방지
	return 0;
}