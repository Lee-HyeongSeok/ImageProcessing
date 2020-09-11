#define _CRT_SECURE_NO_WARNING
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void ImgError(Mat img) {
	if (img.empty()) {
		cout << "not read img" << endl;
	}
}

/*
int main() {
	// row, column, ������ ����, color
	Mat image = Mat(400, 600, CV_8UC3, Scalar(0, 0, 0));

	// �� �׸���
	// �������, �׸��� ��ǥ, ����(BGR), ���� ����
	// opencv������ RGB�� �ƴ� BGR�� ǥ��
	line(image, Point(100, 100), Point(300, 300), Scalar(0, 0, 255), 7);
	
	// �簢�� �׸���
	// �������� ����, LeftTop, RightBottom
	rectangle(image, Point(250, 30), Point(450, 100), Scalar(0, 255, 0), 5);

	// �� �׸���
	// ���� �߽� ����, ������
	circle(image, Point(100, 300), 60, Scalar(255, 0, 0), 3);

	// Ÿ�� �׸���
	// �߽���, �߽������� ���ο� ������ ����, ����, ���� ����, �� ����, ����, ����
	ellipse(image, Point(250, 300), Point(100, 60), 45, 0, 360, Scalar(255, 255, 255), 5);


	ImgError(image);
	imshow("image", image);
	waitKey(0);
	return (0);
}

*/