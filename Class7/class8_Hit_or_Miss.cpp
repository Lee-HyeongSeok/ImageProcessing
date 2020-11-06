/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// 영상에서 특정 패턴을 찾는다.
// 255, 255
// 255,
// 모서리를 찾는 코드

int main() {
	Mat input_image = (Mat_<uchar>(8, 8) <<
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 255, 255, 255, 0, 0, 0, 255,
		0, 255, 255, 255, 0, 0, 0, 0,
		0, 255, 255, 255, 0, 255, 0, 0,
		0, 0, 255, 0, 0, 0, 0, 0,
		0, 0, 255, 0, 0, 255, 255, 0,
		0, 255, 0, 255, 0, 0, 255, 0,
		0, 255, 255, 255, 0, 0, 0, 0);

	Mat kernel_leftTop = (Mat_<int>(3, 3) <<
		-1, -1, 0,
		-1, 1, 1,
		0, 1, 0);

	Mat kernel_rightTop = (Mat_<int>(3, 3) <<
		0, -1, -1,
		1, 1, -1,
		0, 1, 0);

	Mat kernel_leftBottom = (Mat_<int>(3, 3) <<
		0, 1, 0,
		-1, 1, 1,
		-1, -1, 0);

	Mat kernel_rightBottom = (Mat_<int>(3, 3) <<
		0, 1, 0,
		1, 1, -1,
		0, -1, -1);

	Mat out1, out2, out3, out4;

	morphologyEx(input_image, out1, MORPH_HITMISS, kernel_leftTop);
	morphologyEx(input_image, out2, MORPH_HITMISS, kernel_rightTop);
	morphologyEx(input_image, out3, MORPH_HITMISS, kernel_leftBottom);
	morphologyEx(input_image, out4, MORPH_HITMISS, kernel_rightBottom);
	
	const int rate = 50;
	resize(input_image, input_image, Size(), rate, rate, INTER_NEAREST);
	imshow("origin img", input_image);

	resize(out1, out1, Size(), rate, rate, INTER_NEAREST);
	resize(out2, out2, Size(), rate, rate, INTER_NEAREST);
	resize(out3, out3, Size(), rate, rate, INTER_NEAREST);
	resize(out4, out4, Size(), rate, rate, INTER_NEAREST);

	imshow("hit or miss", out1+out2+out3+out4);
	waitKey(0);
	return 0;
}
*/