/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image, hsv, dst;
	image = imread("d:/3-2학기/영상처리-안세종/강의자료/beach.png", CV_LOAD_IMAGE_COLOR);
	// CV_BGR2BGR : BGR 컬러 모델로 변경 
	cvtColor(image, hsv, CV_BGR2HSV); // 영상을 HSV 컬러 모델로 변경 

	Mat array[3];
	split(hsv, array);

	imshow("src", image); // 원본 영상
	imshow("hue", array[0]); // 색조
	imshow("saturation", array[1]); // 채도
	imshow("value", array[2]); // 값

	waitKey(0);
	return 0;
}
*/