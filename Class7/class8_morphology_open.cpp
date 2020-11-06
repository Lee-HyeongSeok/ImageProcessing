/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// 팽창 연산 : dialte() 함수
// morphologyEx() 함수
// MORPH_OPEN : 열림 연산 - 침식 연산 이후 팽창 연산 수행
// -> 침식 연산으로 줄었던 크기를 회복 시켜줌 

int main() {
	Mat input_image = (Mat_<uchar>(8, 8) <<
		0, 0, 0, 0, 0, 255, 0, 0,
		0, 255, 255, 255, 0, 0, 0, 0,
		0, 255, 255, 255, 0, 0, 255, 255,
		0, 255, 255, 255, 0, 255, 255, 255,
		255, 255, 255, 0, 0, 255, 255, 255,
		0, 0, 0, 0, 255, 255, 255, 255,
		0, 0, 0, 0, 255, 255, 255, 0,
		0, 0, 0, 0, 0, 0, 0, 0);

	Mat kernel = (Mat_<int>(3, 3) <<
		1, 1, 1,
		1, 1, 1,
		1, 1, 1);

	Mat output_image;

	morphologyEx(input_image, output_image, MORPH_OPEN, kernel);
	const int rate = 50;
	resize(input_image, input_image, Size(), rate, rate, INTER_NEAREST);
	imshow("origin img", input_image);
	resize(output_image, output_image, Size(), rate, rate, INTER_NEAREST);
	imshow("open img", output_image);
	waitKey(0);
	return 0;

}
*/