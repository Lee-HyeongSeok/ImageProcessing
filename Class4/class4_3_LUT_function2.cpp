
/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	// ���� ����
	// ������ Ŀ���� ��ο� �κ��� ���, ���� �κ��� ��Ӱ� ����
	// ���� : ��ü������ ���� ������ ������

	Mat src1, src2, dst;
	double gamma = 10.0;

	src1 = imread("d:/test.jpg");
	if (src1.empty()) {
		cout << "not read" << endl;
	}

	Mat table(1, 256, CV_8U); // CV_8U -> 8��Ʈ unsigned integer : uchar(0~255)
	uchar * p = table.ptr();
	for (int i = 0; i < 256; i++) {
		// g(x, y) = ((f(x,y)/255)^gamma) * 255
		p[i] = saturate_cast<uchar>(pow(i / 255.0, gamma) * 255.0);
	}
	LUT(src1, table, dst);
	imshow("origin", src1);
	imshow("dst", dst);
	waitKey(0);
	return 0;
}
*/