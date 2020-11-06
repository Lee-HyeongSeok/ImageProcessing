/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("D:/3-2학기/영상처리-안세종/images/letterb.png", IMREAD_GRAYSCALE);
	threshold(img, img, 127, 255, THRESH_BINARY);
	imshow("origin", img);

	Mat skel(img.size(), CV_8UC1, Scalar(0));
	Mat element = getStructuringElement(MORPH_CROSS, Size(3, 3));
	Mat temp, eroded;

	do {
		// 침식 연산
		// 형태소는 3 by 3
		erode(img, eroded, element);
		// 팽창 연산
		// 형태소는 3 by 3
		dilate(eroded, temp, element); // 침식 -> 팽창한 결과가 temp에 저장
		subtract(img, temp, temp);
		bitwise_or(skel, temp, skel); // skel 매트릭스와 temp의 XOR 연산

		// 침식 -> 팽창 -> XOR 반복 하기 위함
		eroded.copyTo(img); // 침식했던 매트릭스를 원본 img에 카피 시킴
	} while ((countNonZero(img) != 0)); // 원본 영상이 전부 깎여서 0이 될 때까지 반복

	imshow("result", skel);
	waitKey(0);
	return 1;
}
*/