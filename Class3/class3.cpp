#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/*
int ImgError(Mat m) {
	if (m.empty()) {
		cout << "not read" << endl;
		return -1;
	}
	return 0;
}
int main(int argc, char* argv[]) {
	Mat img = imread("d:/kimminsuByeongsin.jpg");
	if(ImgError(img) != -1)
		imshow("img", img);

	cout << "행의 수" << img.rows << endl;
	cout << "열의 수" << img.cols << endl;
	cout << "행렬 크기" << img.size() << endl;
	cout << "전체 화소 개수" << img.total() << endl;
	cout << "한 화소 크기" << img.elemSize() << endl;
	cout << "타입" << img.type() << endl;
	cout << "채널" << img.channels() << endl;
	waitKey(0);
	return 0;
}
*/