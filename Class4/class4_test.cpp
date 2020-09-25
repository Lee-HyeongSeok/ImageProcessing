/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void Error(Mat& m) {
	if (m.empty()) {
		cout << "not found img" << endl;
	}
}

int main() {
	Mat img_back = imread("d:/iloveimg-resized/bash.png");
	rectangle(img_back, Rect(100, 100, img_back.cols - 200, img_back.rows - 200), Scalar(255, 255, 255), -1);


	imshow("asd", img_back);
	waitKey(0);
	return 0;
}
*/