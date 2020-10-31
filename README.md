# ImageProcessing 수업 예제   
## 출처 : 한국산업기술대학교   
***   

# opencv 프로젝트 만들기   
    opencv 설정- 플랫폼은 항상 x64

<프로젝트-모든 구성>
1. VC++ 디렉터리 - 포함 디렉터리 - opencv/build/include
2. 추가 라이브러리 디렉터리 - opencv/build/x64/vc15/lib

디버그와 릴리즈 구분해야함

<프로젝트-모든구성에서 디버그로 변환>

3. 링커-입력-추가종속성-opencv_world3411d.lib

<프로젝트-모든구성에서 릴리즈로 변환>

4. 링커-입력-추가 종속성-opencv_world3411.lib

이후 해당 프로젝트 폴더에 opencv/build/x64/vc15/bin/에서 opencv_world3411.lib와
opencv_world3411d.lib dll 파일을 복사해서 넣어준다.
