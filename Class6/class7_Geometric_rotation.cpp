/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {
	Mat src = imread("d:/bash.png", IMREAD_COLOR);
	Mat dst = Mat();

	Size dsize = Size(src.cols, src.rows);

	// ���� ������ ���� ���� ����Ʈ ��ü�� ����
	Point center = Point(src.cols / 2.0, src.rows / 2.0);
	Mat M = getRotationMatrix2D(center, 45, 1.0); // ���� ��ǥ�� �������� 45�� ȸ��

	warpAffine(src, dst, M, dsize, INTER_LINEAR); // ������ ����

	imshow("origin", src);
	imshow("new", dst);
	waitKey(0);
	return 1;
}
*/