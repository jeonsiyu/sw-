#include <stdio.h>

int main() {
	//printf() :: 출력을 수행

	//변수 :: "변할 수 있는" 숫자
	// 변수 선언(생성) -> 값을 저장할 공간 마련
	// [자료형] [변수이름];
	int myint;      // "정수형 정보를 담을 수 있는 myint 변수 생성

	// 자료형 :: 정보의 유형
	// 정수(int), 실수(double). 문자(Char)

	// 값 설정 :: [변수이름] = [값];
	// [값]을 [변수이름]에 "대입한다"
	myint = 4;
	double mydouble = 2.5;
	char mychar = 'a';
}

// Ctrl + F5 :: 실행
// F5 :: 디버깅(Debugging) -> 오류 탐색 용도