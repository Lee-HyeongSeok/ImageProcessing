/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ��ü�� ���¸� �� ��Ȯ�ϰ� �� �� ����

int main() {
	Mat src, dst, open;
	src = imread("d:/noise.png", IMREAD_GRAYSCALE);
	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("origin", src);

	// ���¼� ����
	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(dst, open, MORPH_GRADIENT, element);
	imshow("gradient", open);
	waitKey(0);
	return 0;
}
*/
