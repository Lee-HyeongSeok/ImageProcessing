#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// threshold(src, dst, thresh, maxval, type
// src : �Է� ����, 1ä���̾�� ��(8bit or 32bit floating point)
// dst : ��� ����
// thresh : �Ӱ谪
// maxval : ������ �ִ� ��°�
// type : ����ȭ ����
// 1. �̹����� �����Ͽ� ���ϴ� �κ� Ȥ�� ��ü�� �����ϴµ� ���� ����Ѵ�.
// 2. �׷��� ������ �Է����� �޾Ƽ� ���� ��ü�� ��ĵ�ϸ鼭 �ȼ����� threshold�� ���� ũ��
// ��� ������ ���� ��ġ�� �ȼ����� �������, ������ ���������� ��ȯ�Ѵ�.

int main() {
	Mat img = imread("d:/bash.png", IMREAD_GRAYSCALE);
	Mat dst;
	int threshold_value = 127;
	threshold(img, dst, threshold_value, 255, THRESH_BINARY);

	imshow("origin", img);
	imshow("binary", dst);
	waitKey(0);
	return 0;
}