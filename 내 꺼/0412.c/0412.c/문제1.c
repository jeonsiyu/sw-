#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 백준문제
	// 단어 s와 정수 i가 주어졌을 때 s의 i번째 굴자를 출력하는 프로그램을 작성하시오
	// 단어의 길이는 최대 1000
	
	// 문자열 :: 여러개의 문자 -> 배열 학습이 필요
	// "프로그램이 자체적으로 삽입하는 문자열의 끝('\0')과 입력값이
	//		충돌이 일어나지 않게끔 공간을 넉넉히 설정하기"
	// 1. 문자열(char형 배열), 출력할 문자 위치 입력
	char ch[1001];
	int index;
	scanf("%s %d", &ch, &index);
	// printf("%s %d", ch, index);

	// 2. 정답 출력 (문자열의 문자들 중 "특정 위치의 문자를 출력")
	printf("%c", ch[index-1]);