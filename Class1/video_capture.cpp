#include <iostream>
#include <opencv2/opencv.hpp>

/*
using namespace std;
using namespace cv;

void isEmpty(VideoCapture cap) {
	if (!cap.isOpened()) {
		cout << "영상 재생 불가" << endl;
	}
}

int main() {
	// 비디오 캡처의 기본함수를 불러올 때 경로를 지정하면 해당하는 경로의 영상을 불러오게된다.
	VideoCapture cap("비디오 경로");

	// 숫자를 넣었을 때
	// 실제 웹캠의 영상을 받아올 때 사용
	// VideoCapture cap(0) : PC로 연결된 비디오 디바이스의 고유값을 설정하는 것
	// ex) 웹캠 0

	isEmpty(cap); // 비디오를 잘 받아왔는지 검사
	// 사이즈가 지정되지 않은 윈도우 생성 시
	// 인자로 전달된 숫자만큼 창의 크기가 변경될 때 자동으로 커진다.
	namedWindow("frame", 1); 

	for (;;) {
		Mat frame;
		cap >> frame; // 프레임을 받아온다.
		imshow("frame", frame);
		if (waitKey(30) >= 0) break;
	}
	return 0;
}

*/