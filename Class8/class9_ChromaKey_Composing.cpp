/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 크로마키 합성 : 색조를 이용하여 2개의 영상, 비디오 스트림을 합성하는 기술
int main() {
	Mat img = imread("D:/3-2학기/영상처리-안세종/강의자료/chroma.jpg", IMREAD_COLOR);
	Mat img2 = imread("D:/3-2학기/영상처리-안세종/강의자료/beach.png", IMREAD_COLOR);
	
	Mat converted;
	cvtColor(img, converted, COLOR_BGR2HSV); // 크로마 대상 영상을 HSV컬러 모델로 변경
	Mat greenScreen = converted.clone(); // 마스크 영상을 만들기 위함
	// 크로마 대상 영상의 특정  임계 색상표 추출
	inRange(converted, Scalar(60 - 10, 100, 100), Scalar(60 + 10, 255, 255), greenScreen);

	Mat dst, dst1, inverted;
	bitwise_not(greenScreen, inverted); // 마스크 영상의 반전을 inverted 객체에 저장
	bitwise_and(img, img, dst, inverted);
	bitwise_or(dst, img2, dst1, greenScreen);
	bitwise_or(dst, dst1, dst1);

	imshow("img", img);
	imshow("green", greenScreen);
	imshow("dst", dst);
	imshow("dst1", dst1);
	waitKey(0);
	return 0;
}
*/