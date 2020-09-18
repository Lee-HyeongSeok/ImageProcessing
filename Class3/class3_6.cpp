#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat LoadedImage = imread("d:/bash.png", IMREAD_COLOR);
	imshow("Original Image", LoadedImage);

	resize(LoadedImage, LoadedImage, Size(100, 100));
	imshow("New Image", LoadedImage);
	waitKey(0);
	return 0;
}