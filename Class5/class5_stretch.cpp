
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

Mat drawHistogram(int histogram[]) {
	int hist_w = 512; // ������׷��� ����
	int hist_h = 400; // ������׷��� ����
	int bin_w = cvRound((double)hist_w / 256);

	// ������׷��� �׷����� ����, �÷��� ����
	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(255, 255, 255));

	// ������׷����� �ִ밪�� ã�´�.
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
	
	return histImage; // ������׷��� �׸� ��Ʈ������ ��ȯ
}

// ������׷��� ��Ʈ��ġ �Լ�
int stretch(int x, int r1, int s1, int r2, int s2) {
	float result;
	if (0 <= x && x <= r1) {
		result = x * s1 / r1;
	}
	else if (r1 < x && x <= r2) { // ����
		result = (x - r1)*(s2 - s1) / (r2 - r1) + s1;
	}
	else if (r2 < x && x <= 255) {
		result = (x - r2)*(255 - s2) / (255 - r2) + s2;
	}
	return (int)result;
}

int main() {
	Mat image = imread("d:/237D83405404741509.jpg");
	Mat new_image = image.clone();
	int histogram_origin[256] = { 0 };
	int histogram_new[256] = { 0 };

	Mat hist1, hist2;

	int r1, s1, r2, s2;
	cout << "r1 �Է� : "; cin >> r1;
	cout << "r2 �Է� : "; cin >> r2;
	cout << "s1 �Է� : "; cin >> s1;
	cout << "s2 �Է� : "; cin >> s2;

	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < 3; c++) {
				int output = stretch(image.at<Vec3b>(y, x)[c], r1, s1, r2, s2);
				new_image.at<Vec3b>(y, x)[c] = saturate_cast<uchar>(output);
			}
		}
	}

	// �ȼ��� ���� ������׷� �迭�� ��� �ִ��� ī����
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			histogram_origin[(int)image.at<uchar>(y, x)]++;
		}
	}

	hist1 = drawHistogram(histogram_origin); // ������ ���� ������׷� �޾ƿ���

	// �ȼ��� ���� ������׷� �迭�� ��� �ִ��� ī����
	for (int y = 0; y < new_image.rows; y++) {
		for (int x = 0; x < new_image.cols; x++) {
			histogram_new[(int)new_image.at<uchar>(y, x)]++;
		}
	}

	hist2 = drawHistogram(histogram_new); // ������ ���� ������׷� �޾ƿ���

	imshow("origin histogram", hist1);
	imshow("new histogram", hist2);
	imshow("input image", image);
	imshow("output image", new_image);
	waitKey(0);
	return 0;
}
