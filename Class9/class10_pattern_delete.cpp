#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void displayDFT(Mat& src);

// 사람 눈에 보이기 쉽게 하기 위해서 사용
// 영상에 필터링을 적용하기 위해서 사용 
void shuffleDFT(Mat& src) {
	int cX = src.cols / 2;
	int cY = src.rows / 2;

	Mat q1(src, Rect(0, 0, cX, cY));
	Mat q2(src, Rect(cX, 0, cX, cY));
	Mat q3(src, Rect(0, cY, cX, cY));
	Mat q4(src, Rect(cX, cY, cX, cY));

	Mat tmp;
	q1.copyTo(tmp);
	q4.copyTo(q1);
	tmp.copyTo(q4);
	q2.copyTo(tmp);
	q3.copyTo(q2);
	tmp.copyTo(q3);
}

Mat getFilter(Size size)
{
	Mat tmp = Mat(size, CV_32F);

	for (int i = 0; i < tmp.rows; i++) {
		for (int j = 0; j < tmp.cols; j++) {
			if (j > (tmp.cols / 2 - 10) && j < (tmp.cols / 2 + 10) && i >(tmp.rows / 2 + 10))
				tmp.at<float>(i, j) = 0;
			else if (j > (tmp.cols / 2 - 10) && j < (tmp.cols / 2 + 10) && i < (tmp.rows / 2 - 10))
				tmp.at<float>(i, j) = 0;
			else
				tmp.at<float>(i, j) = 1;
		}
	}
	Mat toMerge[] = { tmp, tmp };
	Mat filter;
	merge(toMerge, 2, filter);
	return filter;
}
int main() {
	Mat src = imread("d:/pattern.png", IMREAD_GRAYSCALE);
	Mat src_float, dft_image;
	imshow("origin", src);

	// 그레이스케일 영상을 실수 영상으로 변환
	src.convertTo(src_float, CV_32FC1, 1.0 / 255.0);
	dft(src_float, dft_image, DFT_COMPLEX_OUTPUT);
	shuffleDFT(dft_image);
	displayDFT(dft_image);

	Mat lowpass = getFilter(dft_image.size());
	Mat result;

	multiply(dft_image, lowpass, result);
	displayDFT(result);

	Mat inverted_image;
	shuffleDFT(result);
	idft(result, inverted_image, DFT_SCALE | DFT_REAL_OUTPUT);
	imshow("inverted", inverted_image);
	waitKey(0);
	return 1;
}

void displayDFT(Mat& src) {
	Mat image_array[2] = { Mat::zeros(src.size(), CV_32F), Mat::zeros(src.size(), CV_32F) };
	split(src, image_array); // DFT 결과 영상을 2개의 영상으로 분리
	Mat mag_image;

	// 푸리에 변환 계수들의 절대 값 계산
	magnitude(image_array[0], image_array[1], mag_image);

	// 푸리에 변환 계수들은 상당히 크기 때문에 로그 스케일로 변환
	// 0 값이 나오지 않도록 1을 더해준다
	mag_image += Scalar::all(1);
	log(mag_image, mag_image);

	normalize(mag_image, mag_image, 0, 1, CV_MINMAX);
	imshow("DFT", mag_image);
	waitKey(0);
}