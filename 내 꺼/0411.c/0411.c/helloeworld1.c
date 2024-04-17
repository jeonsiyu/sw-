#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 반복문 :: while문, for문, do-while문
	// for(제어변수 초기화 ; 조건문 ; 제어변수 연산) { 
	//	조건문을 충족할 때 반복 수행할 명령문;
	//}

	// 예제 :: n,m을 입력받고,
	// n부터 m까지의 숫자들 중 짝수들 출력

	// 1. n과 m 입력받기
	int n, m;
	scanf("%d %d", n, m);

	// 2-1) n부터m까지의 숫자들 각각에 접근  -> 반복문 수행
	printf("\n<while문으로 작성>\n");
	// while문으로 작성
	int i = n;
	while (i <= m) {
		if (i % 2 == 0) { // i를 2로 나누었을 때 나머지가 없다면 -> 짝수의 기준
		}
		printf("%d", i);
	}
	i++;

	// i가 m보다 커지는 순간 빠져나온다.

	// for으로 작성
	// for(제어변수 초기화 ; 조건문 ; 제어변수 연산) { 
	//	조건문을 충족할 때 반복 수행할 명령문;
	// }
	// 제어 변수 :: "반복할 횟수"를 결정짓는 변수 (위 while문에 있어서 i가 제어 변수)
	//		반복문 수행에 의해서 값이 별할 수 있는 변수
	printf("\n<for문으로 작성>\n");
	for (int i = n; i <= m; i++) {		// 조건문 생략x
		if (i % 2 == 0) {	// i를 2로 나누었을 때 나머지가 없다면 -> 짝수의 기준
			printf("%d", i);
		}
	}