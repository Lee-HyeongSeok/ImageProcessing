#define _CRT_SECURE_NO_WARNING
#include <opencv2/opencv.hpp>
#include <iostream>

// �׸��� �׷��� ���� ����
// ���콺 �̺�Ʈ ó�� ����

using namespace std;
using namespace cv;

void ImgReadError(Mat img) {
	if (img.empty()) {
		cout << "not read image" << endl;
	}
}

/*
// ���콺 �ݹ��Լ�
// �̺�Ʈ�� ���� ����, Ŭ���� ��ġ x,y, �÷���, �Ķ����
// �Ķ���ʹ� ������ ���� �� ����
void onMouse(int event, int x, int y, int flags, void* param) {
	if (event == EVENT_LBUTTONDOWN) { // ���콺 ���ʹ�ư�� ������ ��

		// void �����ͷ� �޾ұ� ������ Mat �����ͷ� ĳ����
		Mat& img = *(Mat*)(param); // �Ķ���ͷ� �Ѿ�� ��ü�� ����, �� ���������� �̹���
		circle(img, Point(x, y), 200, Scalar(0, 255, 0), 10);

		// �̹����� �۾� �ۼ� 
		putText(img, "i found a minsu", Point(x+120, y + 200), FONT_HERSHEY_PLAIN, 2.0, Scalar(255, 0, 0), 2); 
		imshow("src", img); // ������ ����Ǹ� �ٽ� ǥ���Ѵ�.
	}
	else if (event == EVENT_RBUTTONDOWN) { // ���콺 ������ ��ư�� ������ ��

	}
	else if (event == EVENT_MBUTTONDOWN) { // �� Ŭ�� ��

	}
	else if (event == EVENT_MOUSEMOVE) { // ���콺 ������ ��

	}
}
int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR); // image�� �ҷ���
	ImgReadError(src); // image�� �ҷ��Դ��� �˻��ϴ� �Լ�
	imshow("src", src);

	// callback�Լ� ���
	// callback �Լ� : ���콺�� ���� � �Է��� ������ �� �Լ��� ȣ����
	// �̸�, ������ �Լ� �̸�, ���
	setMouseCallback("src", onMouse, &src);

	waitKey(0);
	return 0;
}

*/