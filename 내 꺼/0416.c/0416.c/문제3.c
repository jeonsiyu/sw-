#include<stdio.h>

// a부터 b까지 곱하는 함수를 만들고
// ax2x......xb = 결과 출력하고 반환값 주는 함수 만들기
// 예시
// 1x2x3x4x5
// total = 120

int sum(int a, int b) {
	int total = 1;
	for (int i = a; i <= b; i++) {
		total *= i;
	}
	return total;

}

int main() {
	int a, b;
	printf("정수를 입력하시오.\n");
	scanf("%d %d", &a,&b);

	printf("total = %d\n", sum(a, b));

}