#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// ���� ������ ���� if������ �ٲ㼭 Ǯ��
	//(num1 == num2) ?
	// printf("2�� ���ڴ� �����ϴ�.\n") : printf("2�� ���ڴ� �ٸ��ϴ�.\n");

	// if(���ǽ�) {
	// ���ǽ��� ������ �� ������ ��ɹ� ����
	// }
	// else {
	// �� ���ǹ��� �������� ���� �� ���� �� ��ɹ� ����
	// }
	int a , b;
	scanf("%d %d", &a, &b);
	if (a == b) {
		// "a == b�� ���� ��, ���� �� ��ɹ� ����"
		printf("2���� ���ڴ� �����ϴ�\n");
	}
	else {
		printf("2���� ���ڴ� �ٸ��ϴ�.\n");
	}
}