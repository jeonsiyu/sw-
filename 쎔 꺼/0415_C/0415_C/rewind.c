#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ��°� �Է� :: printf(), scanf()
	// ����, ���ڿ� �Է� :: getchar(char), gets(char[])		-> ����X

	// ���� :: �Է¹��� ���� �Է¹��� ������, �ӽ÷� �����ϴ� ����
	//		"�ӽ�����"�̱� ������ �Է��� ������ ���ÿ� �Ҹ��

	// %c �ʿ� ���鰪('\0')�̳� �ٹٲް�('\n')�� ���� ��� �߻�
	//	=> ������ �����Ϸ��ٰ�, �Է� �浹�� �߻��� ���� �ִ�
	//	=> rewind(stdin) :: ���۸� �����, �Է� �浹 ����

	int num;
	char ch, c;
	scanf("%d", &num);		// ���ۿ� int�� �Է�	-> num���� �̵�
	rewind(stdin);		// '\n'�� �ִ� ���� �����
	scanf("%c", &ch);		// char�� �Է¹ް�, ��Ȱ�ϰ� ch�� �̵���
	rewind(stdin);
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
}