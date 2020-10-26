#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main() {
	Mat src = imread("d:/bash.png", IMREAD_COLOR);
	Mat dst = Mat();

	Size dsize = Size(src.cols, src.rows);

	// 원본 영상의 센터 값을 포인트 객체로 저장
	Point center = Point(src.cols / 2.0, src.rows / 2.0);
	Mat M = getRotationMatrix2D(center, 45, 1.0); // 센터 좌표를 기준으로 45도 회전

	warpAffine(src, dst, M, dsize, INTER_LINEAR); // 보간법 설정

	imshow("origin", src);
	imshow("new", dst);
	waitKey(0);
	return 1;
}
