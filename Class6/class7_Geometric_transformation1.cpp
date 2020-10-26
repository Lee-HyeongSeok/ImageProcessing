/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/237D83405404741509.jpg", IMREAD_GRAYSCALE);
	Mat dst = Mat::zeros(Size(src.cols * 5, src.rows * 5), src.type());

	for (int y = 0; y < src.rows; y++) {
		for (int x = 0; x < src.cols; x++) {
			const int newX = x / 2;
			const int newY = y / 2;
			dst.at<uchar>(y, x) = src.at<uchar>(newY, newX);
		}
	}
	imshow("origin", src);
	imshow("new", dst);
	waitKey(0);
	return 0;
}
*/