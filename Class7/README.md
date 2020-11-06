## openCV C++을 활용한 영상처리   
#### 출처 : 한국산업기술대학교   
***   

* 형태학적 처리란?    
		* 형태학 : 물체의 형태와 구조를 다루는 것   
		* 형태학적 처리(mathematical morphology) : 특정한 모양의 형태소를 영상에 적용하여 출력 영상 생성   
				1. 형태학적 필터링   
				2. 잡음 제거(노이즈)   
				3. 세션화(문자 분리)   
				4. 골격화(크기가 서로 다른 문자에 대해 해당 문자의 골격을 통해 본질에 접근)   

* 형태학적 처리를 위한 필요 요소   
		* 그레이스케일   
		* 이진 처리(threshold)   
		* 형태소(공간 필터링에서의 마스크와 유사 개념)   

* 형태학적 처리 연산   
		
		1. 침식 연산   
		2. 팽창 연산   
		3. 열림 연산   
		4. 닫힘 연산   
		5. Hit or Miss   
***   

#### 형태소 생성 함수 - getStructuringElement()   
		* getStructuringElement(int shape, Size ksize, Point anchor=Point(-1, -1))   
		1. shape : 형태소 종류 중 하나 선택 가능   
				- 사각형 상자 : MORPH_RECT   
				- 십자가 : MORPH_CROSS   
				- 타원형 : MORPH_ELLIPSE   
		2. ksize : 형태소의 크기(n by n)   
		3. anchor : 형태소의 기준 위치, -1, -1로 지정할 시 기준점은 중심이 된다.   

#### 침식 연산   
		- 모든 인접 화소들이 형태소와 일치하면 출력 화소는 1, 불일치 시 0으로 결정   
		- 크기가 작은 화소를 가진 외부 노이즈 제거를 위함   
		- 두 개의 객체를 세션화 시킬 때 유용하다.   
		- 영상의 객체를 한 화소 축소시킨다.   
		- void erode(InputArray src, OutputArray dst, InputArray kernel)   
				1. src : 연산 대상 이미지   
				2. dst : 출력 이미지   
				3. kernel : 침식 수행 시 사용할 형태소   
						- 디폴트 : 3 by 3 행렬   

#### 팽창 연산   
		- 형태소와 한 개 이상의 화소값이 일치하면 1, 불일치 시 0으로 결정   
		- 밝은 영역을 확장 시킨다.   
		- 객체 내 홀을 제거할 때 유용하다.   
		- 형태소 사이즈가 적당히 클수록 노이즈 제거 효과 좋아짐   
		- void dialte(InputArray src, OutputArray dst, InputArray kernel)   
				1. src : 연산 대상 이미지   
				2. dst : 출력 이미지   
				3. kernel : 형태소 지정   

#### 열림 연산   
		- 침식 연산 다음에 팽창 연산이 이어지는 것이다.   
		- 침식 연산 이후 줄었던 크기를 팽창 연산으로 회복하는 것   
		- 형태소를 증가시키면 외부와 내부 노이즈 제거 효과가 상승하지만 기존 객체의 변형이 일어나선 안된다.   
		- morphologyEx(src, dst, MORPH_OPEN, kernel)   
				1. src : 대상 이미지   
				2. dst : 출력 이미지   
				3. MORPH_OPEN : 열림 연산   
				4. kernel : 형태소   

#### 닫힘 연산   
		- 제거 연산의 반대   
		- 팽창 연산 이후 침식 연산 수행   
		- morphologyEx(src, dst, MORPH_CLOSE, element)   
				1. src : 대상 이미지   
				2. dst : 출력 이미지   
				3. MORPH_CLOSE : 닫힘 연산   
				4. element : 형태소 지정   

* 형태학적인 그라디언트   
		- 영상에 팽창과 침식의 차이를 계산해서 객체의 윤곽선을 찾는 방식   
		- morphologyEx(src, dst, MORPH_GRADIENT, element)   
				1. src : 대상 이미지   
				2. dst : 출력 이미지   
				3. MORPH_GRADIENT : 형태학적 그라디언트 지정   
				4. element : 형태소 지정   
		- 절차   
				1. 침식 연산 적용 : 영상 내 객체는 한 화소 축소됨   
				2. 원본 영상 - 침식 영상 : 물체의 외곽선을 출력   

#### 골격화   
		- 객체의 골격선을 구하는 연산   
		- 중심축 dedial axis 또는 세선화 thinning   
		- 객체의 중심을 지나는 직선이나 곡선을 말한다.   
		- 침식과 열림 연산을 통해 화소를 깎아 내린다.   

``` c++   

// img : 원본 영상
// eroded : 침삭 연산 후 영상
// element : 3 by 3 형태소 행렬
// skel : 골격화 결과 영상을 저장할 Matrix

do
{
	erode(img, eroded, element); // 침삭 연산
	dilate(eroded, temp, element); // 팽창 연산
	subtract(img, temp, temp);
	bitwise_or(skel, temp, skel); // or 연산
	eroded.copyTo(img);
} while ((countNonZero(img) != 0));
```   
#### Hit or Miss 변환   
		- 영상에서 특정 패턴을 찾는 이진 형태학적 연산   
		- 영상 형태소 B1의 침삭 연산, 영상의 여집합과 반대되는 형태소 B2의 교집합을 찾는다.   
		- 