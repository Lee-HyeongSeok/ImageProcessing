/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// 침식 연산
// erode() : 침식 수행 시 사용할 형태소를 지정하는 함수
// 지정하지 않을 시 디폴트는 단순 3 by 3 행렬이다.

// getStructureingElement() : 형태소를 만드는 함수
// 3가지 종류의 형태소 중 하나 선택
// 사각형 상자 : MORPH-RECT
// 십자가 : MORPH_CROSS
// 타원형: MORPH_ELLIPSE

int main() {
	Mat src, dst, erosion_dst, dilation_dst;
	src = imread("d:/noise.png", IMREAD_GRAYSCALE);

	// 이진화, 임계점 127
	// 이진화 시킨 원본 영상을 dst에 저장
	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("dst", dst);

	// 형태소 생성, 3 by 3
	// 기준 위치(-1, -1) 지정 : 기준점이 형태소의 중심이 된다.
	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));

	// 침식 연산 수행 시 사용할 형태소는 element로 지정
	erode(dst, erosion_dst, element); // 침식 수행, dst를 침식 시켜서 erosion_dst에 저장
	imshow("Erosion Demo", erosion_dst);
	waitKey(0);
	return 0;
}
*/