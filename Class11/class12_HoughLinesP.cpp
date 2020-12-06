/*#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main() {
	// 2�� ���� ����ó�� �κп��� �ڵ� �ٲ㺸�� 
	Mat src = imread("D:/3-2�б�/����ó��-�ȼ���/������Ʈ ����/�ְ���������.mp4", 0);
	
	Mat dst, cdst;
	Canny(src, dst, 100, 200); // ĳ�� ���� ����� 
	imshow("edge", dst);
	cvtColor(dst, cdst, CV_GRAY2BGR);

	vector<Vec4i> lines;
	// dst : ���� ������� ���, �׷��̽����� �����̾�� �Ѵ�.
	// lines : ����� ���� �Ű������� �����ϴ� x0, y0, x1, y1 ������ ����
	// 1 : �Ű� ���� r�� �ػ󵵸� ȭ�ҷ� ��Ÿ�� �� 
	// CV_PI/180(1��) : �Ű����� ��Ÿ�� �ػ󵵸� ��Ÿ�� ��
	// 50 : ������ �����ϴµ� �ʿ��� �������� �ּ� ����
	// 100 : ���� �ּ� ����
	// 20 : �ϳ��� �������� ���ֵǴ� ���� ���� �Ÿ� 
	HoughLinesP(dst, lines, 1, CV_PI / 180, 50, 100, 20); // ������ ���� �̾����� ���� ���� 
	for (size_t i = 0; i < lines.size(); i++) {
		Vec4i l = lines[i];
		line(cdst, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 3, CV_AA);
	}
	imshow("src", src);
	imshow("dst", dst);
	waitKey(0);
	return 0;
}
*/