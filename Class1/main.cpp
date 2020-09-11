#define _CRT_SECURE_NO_WARNING

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void ImgResource(Mat img) {
	if (img.empty()) {
		cout << "not read img" << endl;
	}
}

// �̹��� ���� ���� �޼ҵ�
// ���� 1 : ���� ��� img
// ���� 2 : ���� �� ������ img

void convert_img_Gray(Mat img1, Mat img2) {
	cvtColor(img1, img2, CV_BGR2GRAY); // �̹��� ���� ��ȯ
	imshow("gray", img2); // ȭ�鿡 ��ȯ�� �̹��� ���
	imwrite("d:/gray.jpg", img2); // �̹��� ����
}
int main() {
	Mat image; // Mat : image, ������ �ٷ�� ���� �ڷ���
	image = imread("D:/kimminsuByeongsin.jpg", IMREAD_COLOR);
	ImgResource(image);
	imshow("image", image); // image �ҷ�����

	Mat gray, edge, output;
	convert_img_Gray(image, gray); // �̹��� ���� ���� �޼ҵ�� ���� ����

	waitKey(0); // � Ű�� ���� �� ���� ��ٸ��� �Լ�, �ٷ� ���� ����
	return 0;
}