#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// ������ :: "�����ȣ"
	// ���� ������(1) :: =
	// ��� ������(5) :: + ,- ,* ,/(�� ��ȯ), %(������ ��ȯ)

	// 1. 2���� ���ڸ� �Է¹ް�
	// 2. 5���� ���� ����� ����ô���� ����϶�(+ - * / %)
	int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a * b);
		printf("%d\n", a / b);
		printf("%d\n", a % b);

	int num1, num2; 

	scanf("%d %d", &num1, &num2);
	printf("%d\n", num1 + num2);
	printf("%d\n", num1 - num2);
	printf("%d\n", num1 * num2);
	printf("%d\n", num1 / num2);
	printf("%d\n", num1 % num2);

}