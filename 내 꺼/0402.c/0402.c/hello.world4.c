#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �Է� :: �ܼ� �󿡼� ���� ���� �� �ְ� �� �ϴ� ���( 
	//  => scanf() ��� 

	//���� :: 2���� ���ڸ� �Է� �ް�, �̵��� ���� ���
	// 1. �Է°��� ���� �� ���� ����
	int a, b;
	int sum;
	// 2. �ֻܼ󿡼� 2�� �� �Է¹ޱ� (a,b�� ����)
	// scanf("[����������])", &[���� ���� �� ����)}
	scanf("%d %d", &a, &b);

	// sum = a + b;

	printf("%d", a+b);
	// print("%d

}