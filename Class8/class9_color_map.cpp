/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("D:/3-2학기/영상처리-안세종/강의자료/beach.png");
	Mat img_color;
	// 영상 컬러를 컬러 맵으로 재매핑하여 영상 분위기를 변경시킨다.
	applyColorMap(img, img_color, COLORMAP_HOT); // 컬러맵
	
	imshow("origin", img);
	imshow("mapping img", img_color);
	waitKey(0);
	return 0;
}

*/