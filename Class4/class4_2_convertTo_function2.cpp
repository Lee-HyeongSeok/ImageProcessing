/*
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// alpha : 밝기 값이 어떻게 퍼지는지 결정
// beta : 화소에 더해지는 값, 검은 부분은 흰색, 흰 부분은 검은색으로
// 밝은 부분이 더 밝아짐

int main() {
	double alpha = 1.0;
	int beta = 0;
	Mat image = imread("d:/bash.png");
	Mat conv_image = Mat::zeros(image.size(), image.type()); // 원본의 사이즈, 타입 가져옴
	cout << "input alpha [1.0 - 3.0]: "; cin >> alpha;
	cout << "input beta [0-100] : "; cin >> beta;

	// 화소 접근 방식
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < 3; c++) {
				conv_image.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
			}
		}
	}
	imshow("Original image", image);
	imshow("convert image", conv_image);
	waitKey(0);
	return 0;
}
*/

/*
int main() {
	double alpha = 1.0;
	int beta = 0;

	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_img;

	cout << "알파 : [1.0 ~ 3.0]"; cin >> alpha;
	cout << "베타 : [0 ~ 100]"; cin >> beta;

	// convertTo() 함수 사용 

	image.convertTo(conv_img, -1, alpha, beta);
	imshow("origin", image);
	imshow("conv", conv_img);
	waitKey(0);
	return 0;
}
*/

/*
int main() {
	double alpha = 1.0;
	int beta = 0;

	Mat image = imread("d:/kimminsuByeongsin.jpg");
	Mat conv_img;

	cout << "알파 : [1.0 ~ 3.0]"; cin >> alpha;
	cout << "베타 : [0 ~ 100"; cin >> beta;

	// 행렬의 중복정의된 덧셈, 곱셈을 이용 
	conv_img = image * alpha + beta;
	imshow("origin", image);
	imshow("conv", conv_img);
	waitKey(0);
	return 0;
}

*/