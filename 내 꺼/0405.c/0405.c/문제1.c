#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//1. 14681번 (4분면 고르기)
	int x, y;
	int quadrant;
	printf("x 값을 입력하세요.\n");
	scanf("%d", &x);
	printf("y 값을 입력하세요.\n");
	scanf("%d", &y);

	if (x > 0 && 0 > y) {
		quadrant = 1;
		printf("%d\n", quadrant);
	}
	else if (x < 0 && y > 0) {
		quadrant = 2;
		printf("%d\n", quadrant);
	}
	else if (x < 0 && y < 0) {
		quadrant = 3;
		printf("%d\n", quadrant);
	}
	else {
		quadrant = 4;
		printf("%d\n", quadrant);
	}
}

	//2. 2753번 (윤년)




	//3. 문자(영문자, 숫자)를 입력 받고 해당 문자가 영문자( 대문자. 소문자) / 숫자에서 몇번째 문자인지를 출력하라
	// 만약 영문자(대문자, 소문자_를 입력받을 시 , 대소문자, 반전한 결과값도 출력하라.
