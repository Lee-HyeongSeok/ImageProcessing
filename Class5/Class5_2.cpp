/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src, dst;

	src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("image", src);

	Mat threshold_image;
	// ���� ��(�Ӱ谪)�� �������� 100 ������ ȭ�Ұ��� �״��, �̻��� �����Ѵ�.
	// threshold(src, threshold_image, 100, 255, THRESH_BINARY);
	
	// CV_THRESH_OTSU : �� �ɼ��� �ְԵǸ� �ڵ����� ��ο� �κа� ���� �κ��� ��谪�� ã�Ƴ���.
	threshold(src, threshold_image, 0, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
	imshow("Threshold", threshold_image);
	waitKey(0);
	return 0;
}
*/