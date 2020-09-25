
/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR);
	imshow("Original Image", img);
	Mat copy_img = img.clone();

	// c 스타일 연산자 []를 사용
	// 가장 성능이 우수하다.
	// 한줄씩 처리하기 때문에

	for (int r = 0; r < copy_img.rows; r++) {
		uchar *input_image = img.ptr<uchar>(r);
		uchar * output_image = copy_img.ptr<uchar>(r);
		for (int c = 0; c < img.cols; ++c) {
			output_image[c] = saturate_cast<uchar>(output_image[c] + 30);
		}
	}
	imshow("New Image", img);
	waitKey(0);

	return 0;
}

*/