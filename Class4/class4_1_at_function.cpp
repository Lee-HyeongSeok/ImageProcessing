/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void Error(Mat m) {
	if (m.empty()) {
		cout << "not found image" << endl;
	}
}

int main() {
	Mat img = imread("d:/kimminsuByeongsin.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	
	// 밝기, 콘트라스트 조정
	// 화소에 값을 더하는 것
	// 255에 30을 더해서 오버플로우 발생하는 경우 그림이 깨짐
	// at() : 영상에서 임의의 화소값을 가져오거나 수정 가능
	// img.at<uchar>(r, c) = saturate_cast<uchar>(img.at<uchar>(r, c) + 30) 사용하면 오버플로 해결
	for (int r = 0; r < img.rows; r++) {
		for (int c = 0; c < img.cols; ++c) {
			img.at<uchar>(r, c) = img.at<uchar>(r, c) + 30;
		}
	}
	
	

	// 포인터를 이용한 속도 개선
	// 이미지 색상 반전
	// 검은 부분은 흰색, 흰 부분은 검은색으로
	for (int r = 0; r < img.rows; r++) {
		uchar * value = img.ptr<uchar>(r); // input image
		uchar *result = img.ptr<uchar>(r); // output image, 필요시 input image clone해서 사용
		for (int c = 0; c < img.cols; c++) {
			*result++ = *value++ ^ 0xff;
			*result++ = *value++ ^ 0xff;
			*result++ = *value++ ^ 0xff;
		}
	}
	imshow("New Image", img);
	waitKey(0);
	return 0;
}
*/