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

	cout << "���� ��" << img.rows << endl;
	cout << "���� ��" << img.cols << endl;
	cout << "��� ũ��" << img.size() << endl;
	cout << "��ü ȭ�� ����" << img.total() << endl;
	cout << "�� ȭ�� ũ��" << img.elemSize() << endl;
	cout << "Ÿ��" << img.type() << endl;
	cout << "ä��" << img.channels() << endl;
	waitKey(0);
	return 0;
}
*/