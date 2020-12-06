/*#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main() {
	// 2장 뒤쪽 영상처리 부분에서 코드 바꿔보기 
	Mat src = imread("D:/3-2학기/영상처리-안세종/프로젝트 영상/주간도로주행.mp4", 0);
	
	Mat dst, cdst;
	Canny(src, dst, 100, 200); // 캐니 엣지 검출됨 
	imshow("edge", dst);
	cvtColor(dst, cdst, CV_GRAY2BGR);

	vector<Vec4i> lines;
	// dst : 에지 검출기의 출력, 그레이스케일 영상이어야 한다.
	// lines : 검출된 직선 매개변수를 지정하는 x0, y0, x1, y1 형태의 벡터
	// 1 : 매개 변수 r의 해상도를 화소로 나타낸 것 
	// CV_PI/180(1도) : 매개변수 세타의 해상도를 나타낸 것
	// 50 : 직선을 검출하는데 필요한 교차점의 최소 개수
	// 100 : 직선 최소 길이
	// 20 : 하나의 직선으로 간주되는 점들 사이 거리 
	HoughLinesP(dst, lines, 1, CV_PI / 180, 50, 100, 20); // 엣지들 사이 이어지는 라인 검출 
	for (size_t i = 0; i < lines.size(); i++) {
		Vec4i l = lines[i];
		line(cdst, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 3, CV_AA);
	}
	imshow("src", src);
	imshow("dst", dst);
	waitKey(0);
	return 0;
}
*/