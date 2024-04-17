#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//1. int 형 배열 arr[5]를 선언해두고 5개의 숫자를 입력받는다.
	// 5개의 숫자를 입력받는다.

	int arr[5];
	printf("5개의 숫자를 순차적으로 입력해주세요.\n");
	for (int i = 0; i < 5; i++) {
		printf("숫자 %d 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}

	//2. 포인터 변수 ptarr를 선언한다.
	int* ptarr;

	
	// 3. ptarr를 통하여 arr의 값들을 출력하는 방법이 2가지 있다.
	// 2가지의 출력 방법을 찾아보시오.

	for (int i = 0; i < 5; i++) {
		printf("%d", *(ptarr+i));

	}
	

}