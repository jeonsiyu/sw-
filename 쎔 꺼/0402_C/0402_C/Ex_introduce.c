#include <stdio.h>

int main() {
	// ���� ���� �� �� ���� -> "�ʱ�ȭ"
	// ���� �ʱ�ȭ :: [�ڷ���] [�����̸�] = [��];
	int age = 26;
	double height = 171.1;
	char blood = 'A';

	// ������ ���� ����, ������ ���Ĵ�� ����ϱ�
	printf("�ȳ��Ͻʴϱ�, �������Դϴ�.\n");
	printf("���� :: %d\n", age);
	printf("Ű :: %.1lf(cm)\n", height);
	printf("������ :: %c��\n", blood);
	printf("�� ��Ź�帳�ϴ�:)\n");
}