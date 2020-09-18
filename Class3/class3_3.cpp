#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/*
int main() {
	Mat A;
	A = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR);

	Rect r(10, 10, 100, 100);
	Mat D = A(r); // 얕은 복사

	D = Scalar(0, 0, 255); // 관심 영역의 모든 화소가 0, 0, 0이 된다
	imshow("src", A);
	waitKey(0);
	return 0;
}
*/