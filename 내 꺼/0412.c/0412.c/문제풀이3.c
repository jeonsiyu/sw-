#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 1. int�� �迭 arr[5]�� �����ϰ�, 5�� ���ڸ� �Է¹޴´�.
	int arr[5];		// �迭 ��ȣ :: 0 ~ 4
	for (int i = 0; i < 5; i++) {
			scanf("%d", &arr[i]);
	}

	// 2. ������ ���� ptArr�� �����Ѵ�.
	int* ptArr;

	// 3. ptArr�� ���Ͽ�, arr�� ������ ����ϴ� ��� 2���� Ž��
	// printf("%d", arr);
	ptArr = arr;	// arr :: �ܵ����� ����, �迭�� ���� �ּ�
	for (int i = 0; i < 5; i++) {
		// 1) * ����ϴ� ���
		printf("%d ", *(ptArr + i));		// ptArr :: arr�� ù��° �� ����� ����

		// 2) * ������� �ʴ� ���
		printf("%d\n", ptArr[i]);	// ptArr �ܵ� ��� ��� = arr �ܵ� ��� ���
		}

}