/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {
	Mat src = imread("D:/3-2학기/영상처리-안세종/images/book1.jpg", IMREAD_GRAYSCALE);
	Mat img, th1, th2, th3, th4;
	medianBlur(src, img, 5);
	threshold(img, th1, 127, 255, THRESH_BINARY);
	adaptiveThreshold(img, th2, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 11, 2);
	adaptiveThreshold(img, th3, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 11, 2);

	imshow("origin", src);
	imshow("global thresholding", th1);
	imshow("Adaptive mean", th2);
	imshow("Adaptive Gaussian", th3);
	waitKey(0);
	return 0;
}
*/