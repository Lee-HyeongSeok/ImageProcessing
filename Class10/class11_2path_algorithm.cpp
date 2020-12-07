#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img, img_edge, labels, centroids, img_color, stats;
	img = imread("D:/3-2학기/영상처리-안세종/images/coins2.jpg", IMREAD_GRAYSCALE);
	imshow("origin", img);
	// 원래 임계값 128
	// 검은 배경이 0이므로 0 이상의 화소를 가지는 오브젝트는 원래의 색을 가진다.
	threshold(img, img_edge, 60, 255, THRESH_TOZERO);

	// 동전 색이 다르므로 부분 이진화 진행
	//adaptiveThreshold(img, img_edge, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 11, 2);
	imshow("image after threshold", img_edge);

	int n = connectedComponentsWithStats(img_edge, labels, stats, centroids);

	vector<Vec3b> colors(n + 1);
	colors[0] = Vec3b(0, 0, 0);
	for (int i = 1; i <= n; i++) {
		colors[i] = Vec3b(rand() % 256, rand() % 256, rand() % 256);
	}

	// 원래의 색을 가지는 오브젝트를 랜더마이즈한 색으로 매핑 시킨다.
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