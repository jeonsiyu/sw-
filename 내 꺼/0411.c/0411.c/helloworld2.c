#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// countiune :: " 계속", 실행하던 반복문 수행을 중단하고,
	// 실행하던 반복문 수행을 중단하고, 반복문의 처음으로 돌아간다 (반복문 탈출x)
	
	// 예제 :: n부터 m까지의 숫자들 중 짝수만 출력
	// 1.  n,m 입력받기
	int n, m;
	scanf("%d %d", &n, &m);

	// 2. n~m 사이의 숫자들 하나씩 탐색
	for (int i = n; i <= m; i++) {
		if (i % 2 != 0) {
			continue;

	// 홀수인 경우에는 반복문의 처음으로 돌아가게끔 함

	printf("%d", i);
		
}
		//if (i % 2 == 0) {
		//	printf("%d", i);

		//}
		//
	}