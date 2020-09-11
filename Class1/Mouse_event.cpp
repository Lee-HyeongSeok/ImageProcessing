#define _CRT_SECURE_NO_WARNING
#include <opencv2/opencv.hpp>
#include <iostream>

// 그림을 그려서 띄우는 예제
// 마우스 이벤트 처리 예제

using namespace std;
using namespace cv;

void ImgReadError(Mat img) {
	if (img.empty()) {
		cout << "not read image" << endl;
	}
}

/*
// 마우스 콜백함수
// 이벤트에 대한 내용, 클릭한 위치 x,y, 플래그, 파라미터
// 파라미터는 모든것을 받을 수 있음
void onMouse(int event, int x, int y, int flags, void* param) {
	if (event == EVENT_LBUTTONDOWN) { // 마우스 왼쪽버튼을 눌렀을 때

		// void 포인터로 받았기 때문에 Mat 포인터로 캐스팅
		Mat& img = *(Mat*)(param); // 파라미터로 넘어온 객체를 참조, 이 예제에서는 이미지
		circle(img, Point(x, y), 200, Scalar(0, 255, 0), 10);

		// 이미지에 글씨 작성 
		putText(img, "i found a minsu", Point(x+120, y + 200), FONT_HERSHEY_PLAIN, 2.0, Scalar(255, 0, 0), 2); 
		imshow("src", img); // 영상이 변경되면 다시 표시한다.
	}
	else if (event == EVENT_RBUTTONDOWN) { // 마우스 오른쪽 버튼을 눌렀을 때

	}
	else if (event == EVENT_MBUTTONDOWN) { // 휠 클릭 시

	}
	else if (event == EVENT_MOUSEMOVE) { // 마우스 움직일 때

	}
}
int main() {
	Mat src = imread("d:/kimminsuByeongsin.jpg", IMREAD_COLOR); // image를 불러옴
	ImgReadError(src); // image를 불러왔는지 검사하는 함수
	imshow("src", src);

	// callback함수 등록
	// callback 함수 : 마우스에 대한 어떤 입력이 들어오면 이 함수를 호출함
	// 이름, 동작할 함수 이름, 경로
	setMouseCallback("src", onMouse, &src);

	waitKey(0);
	return 0;
}

*/