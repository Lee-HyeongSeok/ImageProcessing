#define _CRT_SECURE_NO_WARNING
#include <opencv2/opencv.hpp>
#include <iostream>

/*
1번 누르면 명암조절
2번 누르면 페인팅 - 트랙바로 색상 조절 가능
q 누르면 while문 탈출

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

// 트랙바 값 변경 시 동작
void on_trackbar(int, void*){ }

void drawCircle(int event, int x, int y, int, void* param) {
	Mat& img = *(Mat*)param;

	// 마우스의 드래그 이벤트
	if (event == CV_EVENT_LBUTTONDOWN) { // 왼쪽 마우스를 눌렀을 때
		drawing = true; // 그리고 있다는 플래그를 true로 지정
	}
	else if (event == CV_EVENT_MOUSEMOVE) { // 마우스가 움직이고 있을 때 그려질 원의 형태가 보임
		if (drawing == true) { // 눌린 상태일 때

			// 트랙바의 rgb값에 의해 페인트 색 변경
			circle(img, Point(x, y), 3, Scalar(blue, green, red), 10); // 반지름이 3이므로 그림판의 페인트 형태의 라인이 그려진다.
		}
	}
	else if (event == CV_EVENT_LBUTTONUP) { // 왼쪽 마우스를 놨을 때
		drawing = false; // 놓게되면 다시 false로 설정
	}
	imshow("img1", img);
}
int main() {
	Mat img;
	img = imread("d:/bash.png", IMREAD_COLOR);
	ReadError(img);

	// 트랙바를 위한 코드
	// 이 윈도우는 어떤 컨트롤이 추가될 때 사이즈가 자동으로 변화된다.
	namedWindow("img1", 1); 

	// 이미지 나타내기
	imshow("img1", img);
	
	// red, green, blue를 트랙바에 지정해준다.
	// 트랙바에 표시할 이름, 배치할 창 이름, 트랙바 값을 저장할 변수, 트랙바 최대값, 리스너 등록
	// 해당하는 r, g, b의 최대값 지정(255)
	// 트랙바에 어떤 이벤트가 나올 때를 위한 on_trackbar 등록
	createTrackbar("R", "img1", &red, 255, on_trackbar);
	createTrackbar("G", "img1", &green, 255, on_trackbar);
	createTrackbar("B", "img1", &blue, 255, on_trackbar);

	// 키보드의 왼쪽, 오른쪽 커서로 명암 조절
	while (1) {
		int key = waitKeyEx(); // 사용자로부터 키를 기다린다.
		cout << key << " "; // 어떤 키가 눌렸는지 출력

		// 누른 키가 1번일 때 명암 조절
		if (key == 49) {
			key = waitKeyEx();

			if (key == 'q') break;
			else if (key == 2424832) { // 오른쪽 커서를 눌렀을 때
				img -= 50; // 영상이 어두워진다.
			}
			else if (key == 2555904) { // 왼쪽 커서를 눌렀을 때
				img += 50;
			}
			imshow("img1", img);
		}
		else if (key == 50) { // 누른 키가 2번일 때 페인팅
			setMouseCallback("img1", drawCircle, &img);
		}
	}
		
	waitKey(0);
	imwrite("d:/test1.jpg", img);
	return 0;
}
