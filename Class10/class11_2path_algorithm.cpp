#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img, img_edge, labels, centroids, img_color, stats;
	img = imread("D:/3-2�б�/����ó��-�ȼ���/images/coins2.jpg", IMREAD_GRAYSCALE);
	imshow("origin", img);
	// ���� �Ӱ谪 128
	// ���� ����� 0�̹Ƿ� 0 �̻��� ȭ�Ҹ� ������ ������Ʈ�� ������ ���� ������.
	threshold(img, img_edge, 60, 255, THRESH_TOZERO);

	// ���� ���� �ٸ��Ƿ� �κ� ����ȭ ����
	//adaptiveThreshold(img, img_edge, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 11, 2);
	imshow("image after threshold", img_edge);

	int n = connectedComponentsWithStats(img_edge, labels, stats, centroids);

	vector<Vec3b> colors(n + 1);
	colors[0] = Vec3b(0, 0, 0);
	for (int i = 1; i <= n; i++) {
		colors[i] = Vec3b(rand() % 256, rand() % 256, rand() % 256);
	}

	// ������ ���� ������ ������Ʈ�� ������������ ������ ���� ��Ų��.
	img_color = Mat::zeros(img.size(), CV_8UC3);
	for (int y = 0; y < img_color.rows; y++) {
		for (int x = 0; x < img_color.cols; x++) {
			int label = labels.at<int>(y, x);
			img_color.at<Vec3b>(y, x) = colors[label];
		}
	}
	imshow("lebeled map", img_color);
	waitKey(0);
	return 0;
}