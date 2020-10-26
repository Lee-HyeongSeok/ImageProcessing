/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

float Lerp(float s, float e, float t) {
	return s + (e - s)*t;
}

// x먼저 구하고 y의 점을 구해서 input 이미지의 픽셀 사이 값을 유추
float Blerp(float c00, float c10, float c01, float c11, float tx, float ty) {
	return Lerp(Lerp(c00, c10, tx), Lerp(c01, 11, tx), ty);
}

float GetPixel(Mat img, int x, int y) {
	if (x > 0 && y > 0 && x < img.cols && y < img.rows)
		return (float)(img.at<uchar>(y, x));
	else
		return 0.0;
}
int main() {
	Mat src = imread("d:/237D83405404741509.jpg", IMREAD_GRAYSCALE);
	Mat dst = Mat::zeros(Size(src.cols * 2, src.rows * 2), src.type());

	for (int y = 0; y < dst.rows; y++) {
		for (int x = 0; x < dst.cols; x++) {
			float gx = ((float)x) / 2.0;
			float gy = ((float)y) / 2.0; // 요기까지만 하면 최근접 보간법이다.
			int gxi = (int)gx;
			int gyi = (int)gy;

			float c00 = GetPixel(src, gxi, gyi); // c(0, 0)의 값을 가져오는 의미
			float c10 = GetPixel(src, gxi + 1, gyi);
			float c01 = GetPixel(src, gxi, gyi + 1);
			float c11 = GetPixel(src, gxi + 1, gyi + 1);

			int value = (int)Blerp(c00, c10, c01, c11, gx - gxi, gy - gyi);
			dst.at<uchar>(y, x) = value;
		}
	}

	imshow("origin", src);
	imshow("new", dst);
	waitKey(0);
	return 0;
}
*/