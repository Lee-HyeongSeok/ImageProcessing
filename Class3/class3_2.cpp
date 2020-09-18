#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void Error(Mat img) {
	if (img.empty()) {
		cout << "not found image" << endl;
	}
}

/*
얕은 복사 : Mat B = A;
깊은 복사 : Mat B = A.clone();
*/


int main() {
	Mat a = imread("d:/kimminsuByeongsin.jpg");
	//Mat b = a; // 얕은 복사
	Mat b = a.clone(); // 깊은 복사

	imshow("origin", a);

	flip(b, b, 0);
	imshow("copy", a);

	waitKey(0);
	return 0;
}
