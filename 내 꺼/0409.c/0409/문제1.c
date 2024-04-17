#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 2개의 숫자 n,m을 입력받고, 
	// n부터 m의 숫자들 중 3의 배수인 것만 순차적으로 출력하여라
	int n, m;
	printf("두개의 숫자를 입력하세요.\n");
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++ ) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
}

}
