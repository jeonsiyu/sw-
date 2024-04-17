#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main() {
	// 1. 시험 점수를 입력받고, 합격/불합격 여부 결과를 출력하여라.
	//  이때 점수가 60점 이상일 경우가 합격에 해당한다.

	int score;
	printf("점수를 입력해주세요.\n");
	scanf("%d", &score);


	switch (score >= 60) {
	case 1:
		printf("합격입니다.\n");
		break;
	case 0 :
		printf("불합격입니다.\n");
		break;
	default:
		printf("다시 입력하세요\n");
	}


	// 2. 성적을 입력받고, 이 성적이 어느 학점에 해당되는지를 출력하여라.
	// - A (100~90)
	// - B (80~89)
	// - C (70~79)
	// - D (60~69)
	// - F 

	switch (score/10) {
	case 10:
	case 9:
		printf("등급: A\n");
		break;
	case 8:
		printf("등급: B\n");
		break;
	case 7:
		printf("등급: C\n");
		break;
	case 6:
		printf("등급: D\n");
		break;
	default:
		printf("등급: F\n");
	}
}
