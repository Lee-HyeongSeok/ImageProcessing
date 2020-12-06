/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("D:/3-2학기/영상처리-안세종/images/Lenna.jpg", IMREAD_GRAYSCALE);
	Mat blur, th1, th2, th3, th4;
	threshold(src, th1, 127, 255, THRESH_BINARY);
	threshold(src, th2, 0, 255, THRESH_BINARY | THRESH_OTSU);

	Size size = Size(5, 5);
	GaussianBlur(src, blur, size, 0);
	threshold(blur, th3, 0, 255, THRESH_BINARY | THRESH_OTSU);

	imshow("origin", src); // 원본
	imshow("Global", th1); // 전역 이진화
	imshow("Otsu", th2); // Otsu 알고리즘 사용 
	imshow("Otsu after Blurring", th3); // Otsu와 블러링 사용 
	waitKey(0);
	return 0;
}*/