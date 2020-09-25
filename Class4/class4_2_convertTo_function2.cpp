/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// alpha : ��� ���� ��� �������� ����
// beta : ȭ�ҿ� �������� ��, ���� �κ��� ���, �� �κ��� ����������
// ���� �κ��� �� �����

int main() {
	double alpha = 1.0;
	int beta = 0;
	Mat image = imread("d:/bash.png");
	Mat conv_image = Mat::zeros(image.size(), image.type()); // ������ ������, Ÿ�� ������
	cout << "input alpha [1.0 - 3.0]: "; cin >> alpha;
	cout << "input beta [0-100] : "; cin >> beta;

	// ȭ�� ���� ���
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < 3; c++) {
				conv_image.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
			}
		}
	}
	imshow("Original image", image);
	imshow("convert image", conv_image);
	waitKey(0);
	return 0;
}
*/

/*
int main() {
	double alpha = 1.0;
	int beta = 0;

	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_img;

	cout << "���� : [1.0 ~ 3.0]"; cin >> alpha;
	cout << "��Ÿ : [0 ~ 100]"; cin >> beta;

	// convertTo() �Լ� ��� 

	image.convertTo(conv_img, -1, alpha, beta);
	imshow("origin", image);
	imshow("conv", conv_img);
	waitKey(0);
	return 0;
}
*/

/*
int main() {
	double alpha = 1.0;
	int beta = 0;

	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_img;

	cout << "���� : [1.0 ~ 3.0]"; cin >> alpha;
	cout << "��Ÿ : [0 ~ 100"; cin >> beta;

	// ����� �ߺ����ǵ� ����, ������ �̿� 
	conv_img = image * alpha + beta;
	imshow("origin", image);
	imshow("conv", conv_img);
	waitKey(0);
	return 0;
}

*/