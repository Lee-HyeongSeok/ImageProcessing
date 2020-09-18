#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


int main() {
	Mat m = imread("d:/bash.png");
	//Mat logo = imread("d:/icon_graphic1.png");
	Mat logo(100, 200, CV_8UC3, Scalar(255, 0, 0));
	putText(logo, "warter mark", Point(100, 200), FONT_HERSHEY_PLAIN, 2.0, 255, 2);
	Mat roi(m, Rect(m.cols - logo.cols, m.rows - logo.rows, logo.cols, logo.rows));
	logo.copyTo(roi);

	imshow("result", m);
	waitKey(0);
	return 0;
}

