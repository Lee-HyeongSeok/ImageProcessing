/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 선형 콘트라스트 확대
// 콘트라스트 조정
int contrastEnh(int input, int x1, int y1, int x2, int y2) {
	double output;
	if (0 <= input && input <= x1) { // 0~x1 까지
		output = y1 / x1 * input; // 기울기
	}
	else if (x1 < input && input <= x2) { // x1 ~ x2 까지
		output = ((y2 - y1) / (x2 - x1)) * (input - x1) + y1; // (x1, y1) ~ (x2, y2) 사이 기울기
	}
	else if (x2 < input && input <= 255) { // x2 ~ 255까지 
		output = ((255 - y2) / (255 - x2)) * (input - x2) + y2; // (x2, y2) ~ (255, 255) 사이 기울기
	}
	return (int)output; // 구한 기울기 리턴
}

int main() {
	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_image = image.clone();

	int x1, y1, x2, y2;
	cout << "x1 값 입력 : "; cin >> x1;
	cout << "y1 값 입력 : "; cin >> y1;
	cout << "x2 값 입력 : "; cin >> x2;
	cout << "y2 값 입력 : "; cin >> y2;

	// x1, x2를 x1은 낮고, x2는 높게 잡으면 contrast가 높아진다.
	// 반대로는 contrast가 낮아진다.
	for (int r = 0; r < image.rows; r++) {
		for (int c = 0; c < image.cols; c++) {
			for (int ch = 0; ch < 3; ch++) {
				int output = contrastEnh(image.at<Vec3b>(r, c)[ch], x1, y1, x2, y2);
				conv_image.at<Vec3b>(r, c)[ch] = saturate_cast<uchar>(output);
			}
		}
	}
	imshow("origin", image);
	imshow("conv", conv_image);
	waitKey(0);
	return 0;
}
*/