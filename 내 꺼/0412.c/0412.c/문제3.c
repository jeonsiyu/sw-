#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//1. int �� �迭 arr[5]�� �����صΰ� 5���� ���ڸ� �Է¹޴´�.
	// 5���� ���ڸ� �Է¹޴´�.

	int arr[5];
	printf("5���� ���ڸ� ���������� �Է����ּ���.\n");
	for (int i = 0; i < 5; i++) {
		printf("���� %d �Է�: ", i + 1);
		scanf("%d", &arr[i]);
	}

	//2. ������ ���� ptarr�� �����Ѵ�.
	int* ptarr;

	
	// 3. ptarr�� ���Ͽ� arr�� ������ ����ϴ� ����� 2���� �ִ�.
	// 2������ ��� ����� ã�ƺ��ÿ�.

	for (int i = 0; i < 5; i++) {
		printf("%d", *(ptarr+i));

	}
	

}