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
¾èÀº º¹»ç : Mat B = A;
±íÀº º¹»ç : Mat B = A.clone();
*/

/*
int main() {
	Mat a = imread("d:/kimminsuByeongsin.jpg");
	//Mat b = a; // ¾èÀº º¹»ç
	Mat b = a.clone(); // ±íÀº º¹»ç

	imshow("origin", a);

	flip(b, b, 0);
	imshow("copy", a);

	waitKey(0);
	return 0;
}
*/