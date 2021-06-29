## 한국산업기술대학교 영상처리 팀프로젝트   

#### 주제 : 자율 주행 자동차 영상 처리를 위한 고속 도로 주행영상 허프 변환 라인 처리

***





### :pushpin: 과정

- [1] 마스크 생성
- [2] 영상 처리 - 캐니 에지 연산자 처리(그라디언트 계산)
- [3] 마스크와 캐니 에지 연산자 처리 후 영상 AND 연산 수행
- [4] 3번의 결과에 대한 허프 변환으로 직선 검출
- [5] 원본 이미지와 4번의 결과를 bitwise 연산 처리 

<br>

####   

#### 마스크 처리   
![mask](https://user-images.githubusercontent.com/55940552/101659551-8c144000-3a89-11eb-82ea-4c89982d3770.PNG)   

#### 캐니 에지 연산자 처리   
![canny](https://user-images.githubusercontent.com/55940552/101659554-8d456d00-3a89-11eb-8b35-5506e98f512c.PNG)   

#### 허프 변환 이후 라인 처리   
![hough](https://user-images.githubusercontent.com/55940552/101659558-8dde0380-3a89-11eb-90f3-32ae4a203e07.PNG)   

#### bitwise 연산을 통한 원본 이미지 라인 처리(최종 출력물)   
![bitwise_end](https://user-images.githubusercontent.com/55940552/101659560-8dde0380-3a89-11eb-8680-251f13d8af14.PNG)   

<br> 

### :pushpin: 사용법

- 프로젝트 import
- main.cpp 내부에 14번째 줄
  - VideoCapture 클래스에 실행하려는 비디오 경로 설정
- main.cpp 실행

