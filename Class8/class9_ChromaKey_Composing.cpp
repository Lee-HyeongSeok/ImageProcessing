/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ũ�θ�Ű �ռ� : ������ �̿��Ͽ� 2���� ����, ���� ��Ʈ���� �ռ��ϴ� ���
int main() {
	Mat img = imread("D:/3-2�б�/����ó��-�ȼ���/�����ڷ�/chroma.jpg", IMREAD_COLOR);
	Mat img2 = imread("D:/3-2�б�/����ó��-�ȼ���/�����ڷ�/beach.png", IMREAD_COLOR);
	
	Mat converted;
	cvtColor(img, converted, COLOR_BGR2HSV); // ũ�θ� ��� ������ HSV�÷� �𵨷� ����
	Mat greenScreen = converted.clone(); // ����ũ ������ ����� ����
	// ũ�θ� ��� ������ Ư��  �Ӱ� ����ǥ ����
	inRange(converted, Scalar(60 - 10, 100, 100), Scalar(60 + 10, 255, 255), greenScreen);

	Mat dst, dst1, inverted;
	bitwise_not(greenScreen, inverted); // ����ũ ������ ������ inverted ��ü�� ����
	bitwise_and(img, img, dst, inverted);
	bitwise_or(dst, img2, dst1, greenScreen);
	bitwise_or(dst, dst1, dst1);

	imshow("img", img);
	imshow("green", greenScreen);
	imshow("dst", dst);
	imshow("dst1", dst1);
	waitKey(0);
	return 0;
}
*/