/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void Error(Mat m) {
	if (m.empty()) {
		cout << "not found image" << endl;
	}
}

int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	
	// ���, ��Ʈ��Ʈ ����
	// ȭ�ҿ� ���� ���ϴ� ��
	// 255�� 30�� ���ؼ� �����÷ο� �߻��ϴ� ��� �׸��� ����
	// at() : ���󿡼� ������ ȭ�Ұ��� �������ų� ���� ����
	// img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + 30) ����ϸ� �����÷� �ذ�
	for (int r = 0; r < img.rows; r++) {
		for (int c = 0; c < img.cols; ++c) {
			img.at<uchar>(r, c) = img.at<uchar>(r, c) + 30;
		}
	}
	
	

	// �����͸� �̿��� �ӵ� ����
	// �̹��� ���� ����
	// ���� �κ��� ���, �� �κ��� ����������
	for (int r = 0; r < img.rows; r++) {
		uchar * value = img.ptr<uchar>(r); // input image
		uchar *result = img.ptr<uchar>(r); // output image, �ʿ�� input image clone�ؼ� ���
		for (int c = 0; c < img.cols; c++) {
			*result++ = *value++ ^ 0xff;
			*result++ = *value++ ^ 0xff;
			*result++ = *value++ ^ 0xff;
		}
	}
	imshow("New Image", img);
	waitKey(0);
	return 0;
}
*/