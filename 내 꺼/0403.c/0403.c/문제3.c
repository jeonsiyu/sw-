#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// 삼항 연산자 문제 if문제로 바꿔서 풀기
	//(num1 == num2) ?
	// printf("2개 숫자는 같습니다.\n") : printf("2개 숫자는 다릅니다.\n");

	// if(조건식) {
	// 조건식이 성립할 때 수행할 명령문 나열
	// }
	// else {
	// 위 조건문이 성립되지 않을 떄 수행 할 명령문 나열
	// }
	int a , b;
	scanf("%d %d", &a, &b);
	if (a == b) {
		// "a == b가 참일 때, 수행 할 명령문 나열"
		printf("2개의 숫자는 같습니다\n");
	}
	else {
		printf("2개의 숫자는 다릅니다.\n");
	}
}