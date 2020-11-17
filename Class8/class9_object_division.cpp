/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ��ü ����
// Ư�� ����ǥ�� �ش��ϴ� ������ 1, �������� 0���� ó���ϴ� ���
// inRange() : �������� �̹����� �ٲܰ��ΰ�?
// Scalar(100, 0, 0) : �÷� ���� 100�̰� ä��, ���� 0�� ���� �̾Ƴ� 
// Scalar(120, 255, 255) : 
// Scalar1 ~ scalar2 ������ ����ǥ�� �̾Ƴ� 
// �����̹������� sc(100, 0, 0) ~ sc(120, 255, 255) ������ ���� 1�� ó�� �������� 0���� ó��
// ������ ���ؼ� �����ϰ� ���� ���� HSV ���� ����ϸ� �ȴ�.
int main() {
	Mat img = imread("D:/3-2�б�/����ó��-�ȼ���/�����ڷ�/beach.png", IMREAD_COLOR);
	
	// ���� ������ HSV �÷� �𵨷� ���� 
	// ������ ���ؼ� �����ϱ� ����
	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	// Scalar(100, 0, 0) ~ Scalar(120, 255, 255) ���� ������ �ش��ϴ� ������ �Ӱ谪���� ����
	// �ش��ϴ� ������ 1, �������� 0���� ó��
	Mat imgThresholded;

	// �ٴ����� ����, �ٴ��ʿ��� ���� ���� �� ~ ���� ū �� ������ ����ǥ 
	//inRange(imgHSV, Scalar(100, 0, 0), Scalar(120, 255, 255), imgThresholded);
	// ������ ����, ���ʿ��� ���� ���� �� ~ ���� ū �� ������ ����ǥ 
	inRange(imgHSV, Scalar(10, 0, 0), Scalar(35, 255, 255), imgThresholded);
	imshow("origin", img);
	imshow("thresholded img", imgThresholded);

	waitKey(0);
	return 0;
}
*/