/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image;
	image = imread("D:/3-2�б�/����ó��-�ȼ���/�����ڷ�/rcube.jpg", CV_LOAD_IMAGE_COLOR);

	Mat bgr[3];
	split(image, bgr); // bgr ���󿡼� b, g, r�� �и��Ͽ� Mat ��ü �迭�� ���� 

	imshow("src", image);
	imshow("blue", bgr[0]);
	imshow("green", bgr[1]);
	imshow("red", bgr[2]);
	imshow("sum", bgr[1] + bgr[2]);
	waitKey(0);
	return 0;
}
*/