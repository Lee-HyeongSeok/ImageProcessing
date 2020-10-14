
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src, dst;

	src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("image", src);

	Mat threshold_image;
	// 일정 값(임계값)을 기준으로 100 이하의 화소값은 그대로, 이상은 제거한다.
	// threshold(src, threshold_image, 100, 255, THRESH_BINARY);
	
	// CV_THRESH_OTSU : 이 옵션을 주게되면 자동으로 어두운 부분과 밝은 부분의 경계값을 찾아낸다.
	threshold(src, threshold_image, 0, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
	imshow("Threshold", threshold_image);
	waitKey(0);
	return 0;
}
