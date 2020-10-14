
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 히스토그램을 그리는 함수

void drawHistogram(int histogram[]) {
	int hist_w = 512; // 히스토그램의 높이
	int hist_h = 400; // 히스토그램의 넓이
	int bin_w = cvRound((double)hist_w / 256);

	// 히스토그램이 그려지는 영상, 컬러로 정의
	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(255, 255, 255));

	// 히스토그램에서 최대값을 찾는다.
	int max = histogram[0];
	for (int i = 1; i < 256; i++) {
		if (max < histogram[i])
			max = histogram[i];
	}

	for (int i = 0; i < 255; i++) {
		histogram[i] = floor(((double)histogram[i] / max) * histImage.rows);
	}

	for (int i = 0; i < 255; i++) {
		line(histImage, Point(bin_w * (i), hist_h), Point(bin_w * (i), hist_h - histogram[i]),
			Scalar(0, 0, 255));
	}
	imshow("histogram", histImage);
}
int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("input image", src);

	int histogram[256] = { 0 };

	// 히스토그램 만들기
	// 좌표에 맞는 픽셀 값을 받아와서 히스토그램 배열에 삽입한다.
	for (int y = 0; y < src.rows; y++) {
		for (int x = 0; x < src.cols; x++) {
			histogram[(int)src.at<uchar>(y, x)]++;
		}
	}

	drawHistogram(histogram);
	waitKey(0);
	return 0;
}
