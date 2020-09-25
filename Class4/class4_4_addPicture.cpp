/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	// 두 사진의 픽셀 값이 맞아야 함
	Mat src1 = imread("d:/iloveimg-resized/bash.png");
	Mat src2 = imread("d:/iloveimg-resized/kimminsuByeongsin.jpg");
	Mat dst;

	double alpha = 0.5;
	double beta;
	double input;

	if (src1.empty()) {
		cout << "src1 not read" << endl;
	}
	if (src2.empty()) {
		cout << "src2 not read" << endl;
	}

	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 0.0, dst);
	imshow("origin", src1);
	imshow("origin2", src2);
	imshow("합성", dst);
	waitKey(0);
	return 0;
}
*/