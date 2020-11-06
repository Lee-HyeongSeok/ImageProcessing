/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("D:/3-2�б�/����ó��-�ȼ���/images/letterb.png", IMREAD_GRAYSCALE);
	threshold(img, img, 127, 255, THRESH_BINARY);
	imshow("origin", img);

	Mat skel(img.size(), CV_8UC1, Scalar(0));
	Mat element = getStructuringElement(MORPH_CROSS, Size(3, 3));
	Mat temp, eroded;

	do {
		// ħ�� ����
		// ���¼Ҵ� 3 by 3
		erode(img, eroded, element);
		// ��â ����
		// ���¼Ҵ� 3 by 3
		dilate(eroded, temp, element); // ħ�� -> ��â�� ����� temp�� ����
		subtract(img, temp, temp);
		bitwise_or(skel, temp, skel); // skel ��Ʈ������ temp�� XOR ����

		// ħ�� -> ��â -> XOR �ݺ� �ϱ� ����
		eroded.copyTo(img); // ħ���ߴ� ��Ʈ������ ���� img�� ī�� ��Ŵ
	} while ((countNonZero(img) != 0)); // ���� ������ ���� �𿩼� 0�� �� ������ �ݺ�

	imshow("result", skel);
	waitKey(0);
	return 1;
}
*/