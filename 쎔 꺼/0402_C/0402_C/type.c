#include <stdio.h>

int main() {
	// �ڷ��� :: "������ ����"
	// �⺻���� �ڷ����� signed�� -> ������ ��� ��� ǥ��O
	// unsigned�� -> 0�� ����� ǥ��O

	// ������ - short, int(��ǥ��), long
	// ǥ���� �� �ִ� ������ ���� ���� 
	short myShort;
	int myInt;		// -21�� ~ +21��
	unsigned int myUint;	// 0 ~ 42��
	long myLong;

	// �Ǽ��� - float, double(��ǥ��)
	// ���е� (�Ҽ��� ǥ�� ����)
	// 3.14 / 3.1419....
	float myFloat;			// "%f"
	double myDouble;		// "%lf"
	
	// ������ - char
	char myChar;
}