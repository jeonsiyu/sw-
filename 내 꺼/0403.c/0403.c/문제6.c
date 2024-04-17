#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// 시험 점수를 입력받아 90~100 A, 80~89점 B, 70~79점 C, 60~69점 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오
	// 첫째줄에 시험 점수가 주어진다. 시험점수는 0보다 크거나 같고, 100보다 작거나 정수이다.
	// 시험 성적을 출력한다.

	int score;
		scanf("%d", &score);
		if (score <= 100) { printf("A\n"); }

		if (score >= 89, score <= 80) { printf("B\n"); }

		if (score >= 79, score <= 70) { printf("C\n"); }

		if (score >= 69, score <= 60) { printf("D\n"); }

		if (score >= 59) { printf("F\n"); }

}
