/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR);

	vector<Mat> bgr_planes; // 영상들의 벡터
	
	// 입력 영상을 색상별로 분리한다.
	// opencv split : 어떤 영상의 채널이 여러개일 때 해당하는 채널만큼 색상을 분리함
	split(src, bgr_planes); 

	int histSize = 256; // 히스토그램에서 사용되는 상자의 개수
	float range[] = { 0, 256 }; // 화소값의 범위
	const float* histRange = { range };
	bool uniform = true, accumulate = false;
	Mat b_hist, g_hist, r_hist; // 분리된 색을 받기위한 매트릭스

	// 3개의 채널로 분리
	// 1은 디멘션
	calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate);

	// 막대 그래프가 그려지는 영상 생성
	int hist_w = 512, hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);
	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));

	// 값들이 영상을 벗어나지 못하도록 정규화한다.
	normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
	normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
	normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());

	for (int i = 0; i < 255; i++) {
		line(histImage, Point(bin_w * (i), hist_h),
			Point(bin_w * (i), hist_h - b_hist.at<float>(i)), Scalar(255, 0, 0));
		line(histImage, Point(bin_w * (i), hist_h),
			Point(bin_w * (i), hist_h - g_hist.at<float>(i)), Scalar(255, 0, 0));
		line(histImage, Point(bin_w * (i), hist_h),
			Point(bin_w * (i), hist_h - r_hist.at<float>(i)), Scalar(255, 0, 0));
	}
	imshow("input image", src);
	imshow("color histogram", histImage);

	// 셋중에 하나만 남기면 원하는 색상 추출가능

	waitKey(0);
	return 0;
}
*/