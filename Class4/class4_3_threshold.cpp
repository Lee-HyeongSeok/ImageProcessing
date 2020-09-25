#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// threshold(src, dst, thresh, maxval, type
// src : 입력 영상, 1채널이어야 함(8bit or 32bit floating point)
// dst : 출력 영상
// thresh : 임계값
// maxval : 가능한 최대 출력값
// type : 이진화 종류
// 1. 이미지를 분할하여 원하는 부분 혹은 물체를 검출하는데 많이 사용한다.
// 2. 그레이 영상을 입력으로 받아서 영상 전체를 스캔하면서 픽셀값이 threshold값 보다 크면
// 결과 영상의 같은 위치의 픽셀값을 흰색으로, 작으면 검은색으로 변환한다.

int main() {
	Mat img = imread("d:/bash.png", IMREAD_GRAYSCALE);
	Mat dst;
	int threshold_value = 127;
	threshold(img, dst, threshold_value, 255, THRESH_BINARY);

	imshow("origin", img);
	imshow("binary", dst);
	waitKey(0);
	return 0;
}