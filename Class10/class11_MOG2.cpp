#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 가우시안 혼합 기반배경
// 전경 분할 알고리즘 
int main() {
	Mat frame;
	Mat result;
	Ptr<BackgroundSubtractor> pMOG2;
	int keyboard=0;
	
	pMOG2 = createBackgroundSubtractorMOG2();
	VideoCapture capture("D:/3-2학기/영상처리-안세종/images/tennis_ball.mp4");

	while ((char)keyboard != 27) {
		if (!capture.read(frame)) {
			exit(EXIT_FAILURE);
		}
		pMOG2->apply(frame, result);
		imshow("Frame", frame);
		imshow("FG Mask MOG2", result);
		keyboard = waitKey(0);
	}
	capture.release();
	return 0;
}