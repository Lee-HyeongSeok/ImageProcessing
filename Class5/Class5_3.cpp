/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);

	imshow("input image", src);
	int histogram[256] = { 0 }; // ������׷��� ���� �� �ִ� �迭�� �����. 0~255����

	// � �̹����� ����� �� �ش��ϴ� ������׷��� ���� ���� ǥ�����ִ� ����
	for (int y = 0; y < src.rows; y++) {
		for (int x = 0; x < src.cols; x++) {
			// at�Լ��� ���� ��� ���� �Է����ָ� �ش��ϴ� ��ġ�� �ȼ� ���� �޾ƿ´�.
			// 0,0�� 50�̶�� �����Ͱ� ������ Histogram[50]++;
			// 0,1�� 100�̶�� �����Ͱ� ������ Histogram[100]++;
			// 50�̳� 100�� ���� ������ �����ϴ� ��
			// ���� �ش��ϴ� �ȼ� ���� ������ ���������༭ ǥ�����ִ� ��
			histogram[(int)src.at<uchar>(y, x)]++;
		}
	}

	int n = 0;

	for (int count : histogram) {
		cout << count << "\t,";
		n++;
		if (n % 8 == 0)
			cout << endl;
	}
	waitKey(0);
	return 0;
}
*/