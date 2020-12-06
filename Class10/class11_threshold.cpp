/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int threshold_value = 128;
int threshold_type = 0;
const int max_value = 255;
const int max_binary_value = 255;
Mat src, src_gray, dst;

// 기본적인 이진화 방법

static void MyThreshold(int, void*) {
	// 이진화 타입을 THRESH_BINARY로 지정 
	// threshold_type = 0
	threshold(src, dst, threshold_value, max_binary_value, threshold_type);
	imshow("result", dst);
}
int main() {
	src = imread("D:/3-2학기/영상처리-안세종/images/coins.jpg", IMREAD_GRAYSCALE);
	namedWindow("result", WINDOW_AUTOSIZE);
	createTrackbar("임계값", "result", &threshold_value, max_value, MyThreshold);
	MyThreshold(0, 0);
	waitKey(0);
	return 0;
}*/