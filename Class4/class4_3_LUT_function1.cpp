/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR);
	imshow("Origin image", img);

	// CV_8U : 8bit unsigned integer(uchar) (0~255)
	Mat table(1, 256, CV_8U);

	uchar* p = table.ptr();
	for (int i = 0; i < 256; ++i) {
		p[i] = (i / 100) * 100;
	}

	Mat img2;

	
	Mat table(1, 256, CV_8UC3);

	uchar* p = table.ptr();
	for (int i = 0; i < 256; i++) {
		p[i * 3] = (i / 100) * 100;
		p[i * 3 + 1] = (i / 100) * 100;
		p[i * 3 + 2] = (i / 100) * 100;
	}
	// LUT : Look up table 
	// 출력 화소에 대한 수행 결과 테이블을 저장
	// 미리 계산된 테이블을 통해 출력 값 변경

	LUT(img, table, img2);

	imshow("New Image", img2);
	waitKey(0);
	return 0;

}
*/