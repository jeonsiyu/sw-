#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 반복문 :: "임의의 횟수만큼" 명령문을 반복하는 구문
	//		조건식을 통해서 얼마나 반복하지 결정이 됨

	// 예제 :: 1부터 5까지 순차적으로 출력하는 프로그램
	// while문
	printf("while문을 통한 1~5숫자 출력 ");
	int num = 1;
	while (num <= 5) {
		printf("%d\n", num);
		num++;
	}
	// num 값이 6이되면 while문 탈출

	//for문
	// (제어 변수 :: 
	//		반복문 수행에 의해 변할수 있는 변수, 반복할 횟수를 결정할 임의의 변수) 
	
	//for (제어변수 초기화; 조건식; 제어변수 연산) {
	//	조건식이 성립할 떄 반복 수행할 명령문
	// }
	printf("for문을 통한 1~5숫자 출력\n");
	for (int num = 1;num <= 5; num++) { 
		printf("%d\n", num);	
	}

}