/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int threshold_value = 128;
int threshold_type = 0;
const int max_value = 255;
const int max_binary_value = 255;
Mat src, src_gray, dst;

// �⺻���� ����ȭ ���

static void MyThreshold(int, void*) {
	// ����ȭ Ÿ���� THRESH_BINARY�� ���� 
	// threshold_type = 0
	threshold(src, dst, threshold_value, max_binary_value, threshold_type);
	imshow("result", dst);
}
int main() {
	src = imread("D:/3-2�б�/����ó��-�ȼ���/images/coins.jpg", IMREAD_GRAYSCALE);
	namedWindow("result", WINDOW_AUTOSIZE);
	createTrackbar("�Ӱ谪", "result", &threshold_value, max_value, MyThreshold);
	MyThreshold(0, 0);
	waitKey(0);
	return 0;
}*/