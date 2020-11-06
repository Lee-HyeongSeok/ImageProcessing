/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// 실제 영상의 노이즈 제거(홀 제거)
// 밝은 영역을 확장


int main() {
	Mat src, dst;
	src = imread("d:/noise.png", IMREAD_GRAYSCALE);

	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("binary img", dst);

	// 형태소 생성
	Mat element = getStructuringElement(MORPH_RECT, Size(2, 2), Point(-1, -1));
	Mat output_image;

	morphologyEx(dst, output_image, MORPH_OPEN, element);
	imshow("open image", output_image);

	waitKey(0);
	return 0;
}
*/