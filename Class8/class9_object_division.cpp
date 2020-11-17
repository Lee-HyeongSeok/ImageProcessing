/*#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// 객체 분할
// 특정 색상표에 해당하는 범위는 1, 나머지는 0으로 처리하는 기능
// inRange() : 무엇으로 이미지를 바꿀것인가?
// Scalar(100, 0, 0) : 컬러 색상 100이고 채도, 명도는 0인 것을 뽑아냄 
// Scalar(120, 255, 255) : 
// Scalar1 ~ scalar2 까지의 색상표를 뽑아냄 
// 원본이미지에서 sc(100, 0, 0) ~ sc(120, 255, 255) 까지의 값을 1로 처리 나머지는 0으로 처리
// 색상을 비교해서 추출하고 싶을 때는 HSV 모델을 사용하면 된다.
int main() {
	Mat img = imread("D:/3-2학기/영상처리-안세종/강의자료/beach.png", IMREAD_COLOR);
	
	// 원본 영상을 HSV 컬러 모델로 변경 
	// 색상을 비교해서 추출하기 위함
	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	// Scalar(100, 0, 0) ~ Scalar(120, 255, 255) 까지 범위에 해당하는 색상을 임계값으로 설정
	// 해당하는 범위는 1, 나머지는 0으로 처리
	Mat imgThresholded;

	// 바다쪽을 추출, 바다쪽에서 가장 작은 값 ~ 가장 큰 값 까지의 색상표 
	//inRange(imgHSV, Scalar(100, 0, 0), Scalar(120, 255, 255), imgThresholded);
	// 모래쪽을 추출, 모래쪽에서 가장 작은 값 ~ 가장 큰 값 까지의 색상표 
	inRange(imgHSV, Scalar(10, 0, 0), Scalar(35, 255, 255), imgThresholded);
	imshow("origin", img);
	imshow("thresholded img", imgThresholded);

	waitKey(0);
	return 0;
}
*/