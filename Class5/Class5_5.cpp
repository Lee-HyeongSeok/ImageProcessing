/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR);

	vector<Mat> bgr_planes; // ������� ����
	
	// �Է� ������ ���󺰷� �и��Ѵ�.
	// opencv split : � ������ ä���� �������� �� �ش��ϴ� ä�θ�ŭ ������ �и���
	split(src, bgr_planes); 

	int histSize = 256; // ������׷����� ���Ǵ� ������ ����
	float range[] = { 0, 256 }; // ȭ�Ұ��� ����
	const float* histRange = { range };
	bool uniform = true, accumulate = false;
	Mat b_hist, g_hist, r_hist; // �и��� ���� �ޱ����� ��Ʈ����

	// 3���� ä�η� �и�
	// 1�� ����
	calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate);

	// ���� �׷����� �׷����� ���� ����
	int hist_w = 512, hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);
	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));

	// ������ ������ ����� ���ϵ��� ����ȭ�Ѵ�.
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

	// ���߿� �ϳ��� ����� ���ϴ� ���� ���Ⱑ��

	waitKey(0);
	return 0;
}
*/