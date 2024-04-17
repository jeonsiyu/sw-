#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
// n을 입력을 받고 1부터 n까지 하여, 짝수들의 총합을 출력하는 프로그램을 만드시오.

	// 1. n입력받기
	int n;
	printf("n을 입력해주시오.");
	scanf("%d",&n);

	// 2. 1부터 시작하여 n을 끝으로 하면서, 숫자 탐색
	int num = 1; // 임의의 변수 num을 통해서 탐색 진행 예정
	int sum = 0; // 짝수들의 총합을 저장할 변수 선언
	while (num <= n) {	 // n 이하 일 때 아래 구문 반복 수행}
		// 짝수들의 총합을 구하기
		if (num % 2 == 0) { // 짝수일 때
			sum += num; //sum에 현재 num 값을 더하기
			printf("%d\n", num);
			printf("현재sum값 :: %d\n", sum);
		}

		num++; // 반목문 1회 수행할 때마다 1씩 증가
		}
	printf("=>%d", sum);
	
}