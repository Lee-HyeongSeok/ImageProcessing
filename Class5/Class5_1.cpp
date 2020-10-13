/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 사진 경로 : d:/kimminsuByeongsin.jpg

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	
	Mat dst;
	equalizeHist(src, dst); // 영상의 분포를 가져와서 화소값 변환

	imshow("origin", src);
	imshow("equal", dst);
	waitKey(0);
	return 0;
}
*/