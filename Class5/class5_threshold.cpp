#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src, dst;

	src = imread("d:/image.jpg", IMREAD_GRAYSCALE);
	imshow("image", src);

	Mat threshold_image;

	// 임계값 : 100
	// 임계값보다 낮으면 0, 크면 설정한 255값으로 이진화
	threshold(src, threshold_image, 100, 255, THRESH_BINARY);
	imshow("threshold", threshold_image);
	waitKey(0);
	return 0;
}
