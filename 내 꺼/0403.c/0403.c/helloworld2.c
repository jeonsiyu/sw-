#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 산출연산자 + 대입연산자 = 복합대입연산자

	// 1. 2개 숫자 입력
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// num1 = num1 + num2; // 두 숫자 합을 num1에 저장
	num1 += num2;
	printf("현재 num1 + num2 결과 :: %d\n", num1);

	// num1 = num1 - num2;  // 두 숫자 합을 num1에 저장 
	num1 -= num2;
	printf("현재 num1 - num2 결과 :: %d\n", num1);
	
	// num1 = num1 * num2;  // 두 숫자의 곱을 num1에 저장
	num1 *= num2;
	printf("현재 num1 * num2 결과 :: %d\n", num1);
	
	// num1 = num1 / num2; // 두 숫자의 나누기 몫을 num1에 저장 
	num1 /= num2;
	printf("현재 num1 / num2 결과 :: %d\n", num1);

	// num1 = num1 % num2; // 두 숫자의 나머지를 num1에 저장
	num1 %= num2;
	printf("현재 num1 %% num2 결과 :: %d\n", num1); // 서식지정자 (%)가 중복된 것으로 인식하여 오류 발생이 있을 수 있음 ㅡ> %를 추가해줘서 오류를 방지
	
	

}
