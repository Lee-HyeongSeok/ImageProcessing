/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ħ�� ����
// erode() : ħ�� ���� �� ����� ���¼Ҹ� �����ϴ� �Լ�
// �������� ���� �� ����Ʈ�� �ܼ� 3 by 3 ����̴�.

// getStructureingElement() : ���¼Ҹ� ����� �Լ�
// 3���� ������ ���¼� �� �ϳ� ����
// �簢�� ���� : MORPH-RECT
// ���ڰ� : MORPH_CROSS
// Ÿ����: MORPH_ELLIPSE

int main() {
	Mat src, dst, erosion_dst, dilation_dst;
	src = imread("d:/noise.png", IMREAD_GRAYSCALE);

	// ����ȭ, �Ӱ��� 127
	// ����ȭ ��Ų ���� ������ dst�� ����
	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("dst", dst);

	// ���¼� ����, 3 by 3
	// ���� ��ġ(-1, -1) ���� : �������� ���¼��� �߽��� �ȴ�.
	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));

	// ħ�� ���� ���� �� ����� ���¼Ҵ� element�� ����
	erode(dst, erosion_dst, element); // ħ�� ����, dst�� ħ�� ���Ѽ� erosion_dst�� ����
	imshow("Erosion Demo", erosion_dst);
	waitKey(0);
	return 0;
}
*/