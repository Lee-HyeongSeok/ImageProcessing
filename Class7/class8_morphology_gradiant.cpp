/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// 객체의 형태를 더 정확하게 알 수 있음

int main() {
	Mat src, dst, open;
	src = imread("d:/noise.png", IMREAD_GRAYSCALE);
	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("origin", src);

	// 형태소 생성
	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(dst, open, MORPH_GRADIENT, element);
	imshow("gradient", open);
	waitKey(0);
	return 0;
}
*/
