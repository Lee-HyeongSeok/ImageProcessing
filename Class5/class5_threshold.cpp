/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src, dst;

	src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("image", src);

	Mat threshold_image;

	// �Ӱ谪 : 100
	// �Ӱ谪���� ������ 0, ũ�� ������ 255������ ����ȭ
	threshold(src, threshold_image, 100, 255, THRESH_BINARY);
	imshow("threshold", threshold_image);
	waitKey(0);
	return 0;
}
*/