#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat img, roi;
int mx1, my1, mx2, my2;
bool cropping = false;

void onMouse(int event, int x, int y, int flags, void* param) {

	if (event == EVENT_LBUTTONDOWN) { // ���콺 ���� ��ư Ŭ�� ��
		mx1 = x;
		my1 = y;
		cropping = true; // �����ٴ� ǥ��
	}
	else if (event == EVENT_MOUSEMOVE) { // ���콺 �����̰� ���� ��

		if (cropping) { // ���콺 ���� ���� ������ ��
			mx2 = x;
			my2 = y;
			int x1=0, y1=0;
			
			x1 = (x1 > mx1) ? x1 : mx1;
			y1 = (y1 > mx1) ? y1 : my1;

			Mat c = img.clone();
			rectangle(c, Rect(mx1, my1, mx2-x1, my2-y1), Scalar(0, 255, 0));
			imshow("image", c);
		}
	}
	else if (event == EVENT_LBUTTONUP) { // ���콺 ���� ��ư���� ���� ����
		mx2 = x;
		my2 = y;
		cropping = false; // �ôٴ� ǥ��
		rectangle(img, Rect(mx1, my1, mx2 - mx1, my2 - my1), Scalar(0, 255, 0));
		imshow("image", img);
	}
	
}
int main() {
	img = imread("d:/bash.png");
	imshow("image", img);
	Mat clone = img.clone(); // �̹��� ����

	setMouseCallback("image", onMouse); // ���콺 �ݹ� �Լ��� void�� �̺�Ʈ �Լ� ���

	while (1) {
		int key = waitKey(100);
		if (key == 'q') break;
		else if (key == 'c') {
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1)); // ������ ���� ����
			//imwrite("d:/result.jpg", roi); // ���� ����
			imshow("result", roi); // �߶� �κ� ������
		}
	}
	return 0;
}