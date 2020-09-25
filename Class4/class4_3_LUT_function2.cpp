
/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	// 감마 보정
	// 감마값 커지면 어두운 부분은 밝게, 밝은 부분은 어둡게 나옴
	// 감마 : 전체적으로 값이 밑으로 떨어짐

	Mat src1, src2, dst;
	double gamma = 10.0;

	src1 = imread("d:/test.jpg");
	if (src1.empty()) {
		cout << "not read" << endl;
	}

	Mat table(1, 256, CV_8U); // CV_8U -> 8비트 unsigned integer : uchar(0~255)
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