#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. 2���� ���ڸ� �Է¹ް�
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// (���ǽ�) ? (���� �� ������ ��ɹ�) : (������ �� ������ ��ɹ�)

	// 2�� ���� ���Ͽ�, ������ �ٸ��� ��� ���
	// 1) bool Ÿ�� ������ ��/���� ���� �Ǻ� -> �̿� ���� ��� ���
	bool tf = (num1 == num2);
	(tf == true) ?
		printf("2�� ���ڴ� �����ϴ�.\n") : printf("2�� ���ڴ� �ٸ��ϴ�.\n");

	// 2) ��� ���ǽ��� �����Ͽ� ��/���� ���� �Ǻ�
	(num1 == num2) ?
		printf("2�� ���ڴ� �����ϴ�.\n") : printf("2�� ���ڴ� �ٸ��ϴ�.\n");
}