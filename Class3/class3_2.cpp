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
���� ���� : Mat B = A;
���� ���� : Mat B = A.clone();
*/

/*
int main() {
	Mat a = imread("d:/kimminsuByeongsin.jpg");
	//Mat b = a; // ���� ����
	Mat b = a.clone(); // ���� ����

	imshow("origin", a);

	flip(b, b, 0);
	imshow("copy", a);

	waitKey(0);
	return 0;
}
*/