#define _CRT_SECURE_NO_WARNING
#include <opencv2/opencv.hpp>
#include <iostream>

/*
1�� ������ �������
2�� ������ ������ - Ʈ���ٷ� ���� ���� ����
q ������ while�� Ż��

*/


using namespace std;
using namespace cv;

int drawing = false;
int red, green, blue;

void ReadError(Mat img) {
	if (img.empty()) {
		cout << "not read image" << endl;
	}
}

// Ʈ���� �� ���� �� ����
void on_trackbar(int, void*){ }

void drawCircle(int event, int x, int y, int, void* param) {
	Mat& img = *(Mat*)param;

	// ���콺�� �巡�� �̺�Ʈ
	if (event == CV_EVENT_LBUTTONDOWN) { // ���� ���콺�� ������ ��
		drawing = true; // �׸��� �ִٴ� �÷��׸� true�� ����
	}
	else if (event == CV_EVENT_MOUSEMOVE) { // ���콺�� �����̰� ���� �� �׷��� ���� ���°� ����
		if (drawing == true) { // ���� ������ ��

			// Ʈ������ rgb���� ���� ����Ʈ �� ����
			circle(img, Point(x, y), 3, Scalar(blue, green, red), 10); // �������� 3�̹Ƿ� �׸����� ����Ʈ ������ ������ �׷�����.
		}
	}
	else if (event == CV_EVENT_LBUTTONUP) { // ���� ���콺�� ���� ��
		drawing = false; // ���ԵǸ� �ٽ� false�� ����
	}
	imshow("img1", img);
}
int main() {
	Mat img;
	img = imread("d:/bash.png", IMREAD_COLOR);
	ReadError(img);

	// Ʈ���ٸ� ���� �ڵ�
	// �� ������� � ��Ʈ���� �߰��� �� ����� �ڵ����� ��ȭ�ȴ�.
	namedWindow("img1", 1); 

	// �̹��� ��Ÿ����
	imshow("img1", img);
	
	// red, green, blue�� Ʈ���ٿ� �������ش�.
	// Ʈ���ٿ� ǥ���� �̸�, ��ġ�� â �̸�, Ʈ���� ���� ������ ����, Ʈ���� �ִ밪, ������ ���
	// �ش��ϴ� r, g, b�� �ִ밪 ����(255)
	// Ʈ���ٿ� � �̺�Ʈ�� ���� ���� ���� on_trackbar ���
	createTrackbar("R", "img1", &red, 255, on_trackbar);
	createTrackbar("G", "img1", &green, 255, on_trackbar);
	createTrackbar("B", "img1", &blue, 255, on_trackbar);

	// Ű������ ����, ������ Ŀ���� ��� ����
	while (1) {
		int key = waitKeyEx(); // ����ڷκ��� Ű�� ��ٸ���.
		cout << key << " "; // � Ű�� ���ȴ��� ���

		// ���� Ű�� 1���� �� ��� ����
		if (key == 49) {
			key = waitKeyEx();

			if (key == 'q') break;
			else if (key == 2424832) { // ������ Ŀ���� ������ ��
				img -= 50; // ������ ��ο�����.
			}
			else if (key == 2555904) { // ���� Ŀ���� ������ ��
				img += 50;
			}
			imshow("img1", img);
		}
		else if (key == 50) { // ���� Ű�� 2���� �� ������
			setMouseCallback("img1", drawCircle, &img);
		}
	}
		
	waitKey(0);
	imwrite("d:/test1.jpg", img);
	return 0;
}
