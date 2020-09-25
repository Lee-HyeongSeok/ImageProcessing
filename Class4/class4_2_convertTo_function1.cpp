/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ������ ��⸦ ������Ű�� �Լ�-1�����̽�
void brighten(Mat& img, int value) {
	Mat convert_image;
	img.convertTo(convert_image, -1, 1, value);
	imshow("new", convert_image);
}

// ������ ��⸦ ������Ű�� �Լ�-2�����̽�
void brighten2(Mat &img, int value) {
	for (int r = 0; r < img.rows; r++) {
		for (int c = 0; c < img.cols; ++c) {
			img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + value);
		}
	}
}
int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	// convertTo(n, type, alpha, beta)
	// n : n ����� ������ ũ��, Ÿ���� �ƴϸ� ��� ���Ҹ� ���� �Ҵ���
	// type : ���ϴ� ��� ����� Ÿ��, ������ �Է� ��İ� ���� Ÿ�� ����
	// alpha : �߰������� ���� ��
	// beta : �߰������� ���� ��
	// Mat conv_Img;
	// img.convertTo(conv_Img, -1, 1, 100); // ���� ��ȯ, a, b���� �ش�.

	// imshow("New Image", conv_Img);
	
	int bright = 0;

	while (1) {
		int key = waitKeyEx(); // ����ڷκ��� Ű�� ���� ������ ��ٸ���.
		cout << key << " "; // � Ű�� ���ȴ��� ���

		if (key == 49) { // 1�� ������ ��� ����
			brighten(img, bright += 10);
		}
		else if (key == 50) { // 2���� ������ ����Ż��
			break;
		}
	}
	
	waitKey(0);

	return 0;
}
*/