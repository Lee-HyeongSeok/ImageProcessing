/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image, hsv, dst;
	image = imread("d:/3-2�б�/����ó��-�ȼ���/�����ڷ�/beach.png", CV_LOAD_IMAGE_COLOR);
	// CV_BGR2BGR : BGR �÷� �𵨷� ���� 
	cvtColor(image, hsv, CV_BGR2HSV); // ������ HSV �÷� �𵨷� ���� 

	Mat array[3];
	split(hsv, array);

	imshow("src", image); // ���� ����
	imshow("hue", array[0]); // ����
	imshow("saturation", array[1]); // ä��
	imshow("value", array[2]); // ��

	waitKey(0);
	return 0;
}
*/