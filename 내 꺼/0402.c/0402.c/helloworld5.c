#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 연산자 :: "연산기호"
	// 대입 연산자(1) :: =
	// 산술 연산자(5) :: + ,- ,* ,/(몫 반환), %(나머지 반환)

	// 1. 2개의 숫자를 입력받고
	// 2. 5가지 연산 결과를 순차척으로 출력하라(+ - * / %)
	int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a * b);
		printf("%d\n", a / b);
		printf("%d\n", a % b);

	int num1, num2; 

	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);

}