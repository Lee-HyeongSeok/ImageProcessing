
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);

	imshow("input image", src);
	int histogram[256] = { 0 }; // 히스토그램을 담을 수 있는 배열을 만든다. 0~255까지

	// 어떤 이미지를 띄웠을 때 해당하는 히스토그램에 대한 값을 표시해주는 예제
	for (int y = 0; y < src.rows; y++) {
		for (int x = 0; x < src.cols; x++) {
			// at함수를 통해 행과 열을 입력해주면 해당하는 위치의 픽셀 값을 받아온다.
			// 0,0에 50이라는 데이터가 들어오면 Histogram[50]++;
			// 0,1에 100이라는 데이터가 들어오면 Histogram[100]++;
			// 50이나 100에 대한 개수가 증가하는 것
			// 영상에 해당하는 픽셀 값의 개수를 증가시켜줘서 표시해주는 것
			histogram[(int)src.at<uchar>(y, x)]++;
		}
	}

	int n = 0;

	for (int count : histogram) {
		cout << count << "\t,";
		n++;
		if (n % 8 == 0)
			cout << endl;
	}
	waitKey(0);
	return 0;
}
