/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ���� ��Ʈ��Ʈ Ȯ��
// ��Ʈ��Ʈ ����
int contrastEnh(int input, int x1, int y1, int x2, int y2) {
	double output;
	if (0 <= input && input <= x1) { // 0~x1 ����
		output = y1 / x1 * input; // ����
	}
	else if (x1 < input && input <= x2) { // x1 ~ x2 ����
		output = ((y2 - y1) / (x2 - x1)) * (input - x1) + y1; // (x1, y1) ~ (x2, y2) ���� ����
	}
	else if (x2 < input && input <= 255) { // x2 ~ 255���� 
		output = ((255 - y2) / (255 - x2)) * (input - x2) + y2; // (x2, y2) ~ (255, 255) ���� ����
	}
	return (int)output; // ���� ���� ����
}

int main() {
	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_image = image.clone();

	int x1, y1, x2, y2;
	cout << "x1 �� �Է� : "; cin >> x1;
	cout << "y1 �� �Է� : "; cin >> y1;
	cout << "x2 �� �Է� : "; cin >> x2;
	cout << "y2 �� �Է� : "; cin >> y2;

	// x1, x2�� x1�� ����, x2�� ���� ������ contrast�� ��������.
	// �ݴ�δ� contrast�� ��������.
	for (int r = 0; r < image.rows; r++) {
		for (int c = 0; c < image.cols; c++) {
			for (int ch = 0; ch < 3; ch++) {
				int output = contrastEnh(image.at<Vec3b>(r, c)[ch], x1, y1, x2, y2);
				conv_image.at<Vec3b>(r, c)[ch] = saturate_cast<uchar>(output);
			}
		}
	}
	imshow("origin", image);
	imshow("conv", conv_image);
	waitKey(0);
	return 0;
}
*/