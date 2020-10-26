#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/bash.png", IMREAD_COLOR);
	Point2f srcTri[3];
	Point2f dstTri[3];
	Mat warp_mat(2, 3, CV_32FC1);

	Mat warp_dst;
	warp_dst = Mat::zeros(src.rows, src.cols, src.type());

	srcTri[0] = Point2f(0, 0); // �̾
}