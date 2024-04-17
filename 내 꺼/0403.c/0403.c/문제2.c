#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// 2개 숫자를 입력받고 // 입력은 scanf 생각하기 
	// 2개 값을 비교하여 결과를 출력하라.
	// 같은지 다른지에 대한 결과만 출력하여라.
	
	// 1. 2개의 숫자를 입력받고
	int  num1, num2;
	scanf("%f %f", &num1, &num2)
	
	// 2개 값을 비교하여 같은지 다른지 결과 출력
	// 1) booi 타입 변수로 참/거짓 여부 판별 -> 이에 따라 결과 출력

	bool tf = (num1 == num2);
	(tf == true) ?
		printf("2개 숫자는 같습니다.") : printf("2개 숫자는 다릅니다.\n");

		// 즉시 조건식을 대입하여 참/거짓 여부 판별
		(num1 == num2) ?
		printf("2개 숫자는 같습니다.\n") : printf("2개 숫자는 다릅니다.\n");

}