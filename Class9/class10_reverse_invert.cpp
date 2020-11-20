/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("D:/load1.jpg", IMREAD_GRAYSCALE);

	Mat img_float, dft1, inversedft, inversedft1;
	img.convertTo(img_float, CV_32F);
	dft(img_float, dft1, DFT_COMPLEX_OUTPUT);

	// 역변환 수행
	idft(dft1, inversedft, DFT_SCALE | DFT_REAL_OUTPUT);
	inversedft.convertTo(inversedft1, CV_8U);
	imshow("inverted dft", inversedft1);
	imshow("origin", img);
	waitKey(0);
	return 0;
}
*/