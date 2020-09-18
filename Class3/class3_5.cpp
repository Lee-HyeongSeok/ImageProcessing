#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat img, roi;
int mx1, my1, mx2, my2;
bool cropping = false;

void onMouse(int event, int x, int y, int flags, void* param) {

	if (event == EVENT_LBUTTONDOWN) { // 마우스 왼쪽 버튼 클릭 시
		mx1 = x;
		my1 = y;
		cropping = true; // 눌렀다는 표시
	}
	else if (event == EVENT_MOUSEMOVE) { // 마우스 움직이고 있을 때

		if (cropping) { // 마우스 아직 눌린 상태일 때
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
	else if (event == EVENT_LBUTTONUP) { // 마우스 왼쪽 버튼에서 손을 떼면
		mx2 = x;
		my2 = y;
		cropping = false; // 뗐다는 표시
		rectangle(img, Rect(mx1, my1, mx2 - mx1, my2 - my1), Scalar(0, 255, 0));
		imshow("image", img);
	}
	
}
int main() {
	img = imread("d:/bash.png");
	imshow("image", img);
	Mat clone = img.clone(); // 이미지 복사

	setMouseCallback("image", onMouse); // 마우스 콜백 함수에 void형 이벤트 함수 등록

	while (1) {
		int key = waitKey(100);
		if (key == 'q') break;
		else if (key == 'c') {
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1)); // 지정한 부위 복사
			//imwrite("d:/result.jpg", roi); // 따로 저장
			imshow("result", roi); // 잘라낸 부분 보여줌
		}
	}
	return 0;
}