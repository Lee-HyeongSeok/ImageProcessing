/*#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/bash.png", IMREAD_COLOR);
	Mat dst = Mat();

	// �����̵��� angle���� �̿��Ͽ� getRotationMatrix2D() �Լ��� �����ߴ�.
	float angle = sqrt(2) / 2;

	int tx = 0;
	int ty = ((src.rows * angle) + (src.cols * angle) - src.rows)/2;
	
	Mat tmat = (Mat_<double>(2, 3) << angle, angle, tx, -angle, angle, ty);
	warpAffine(src, dst, tmat, src.size());


	imshow("origin", src);
	imshow("new", dst);
	waitKey(0);
	return 1;
}
*/