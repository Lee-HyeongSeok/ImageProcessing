/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ���� ��� : d:/kimminsuByeongsin.jpg

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	
	Mat dst;
	equalizeHist(src, dst); // ������ ������ �����ͼ� ȭ�Ұ� ��ȯ

	imshow("origin", src);
	imshow("equal", dst);
	waitKey(0);
	return 0;
}
*/