/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image;
	image = imread("D:/3-2학기/영상처리-안세종/강의자료/rcube.jpg", CV_LOAD_IMAGE_COLOR);

	Mat bgr[3];
	split(image, bgr); // bgr 영상에서 b, g, r을 분리하여 Mat 객체 배열에 담음 

	imshow("src", image);
	imshow("blue", bgr[0]);
	imshow("green", bgr[1]);
	imshow("red", bgr[2]);
	imshow("sum", bgr[1] + bgr[2]);
	waitKey(0);
	return 0;
}
*/