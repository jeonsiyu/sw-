#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �Ű����� :: �Լ��� ȣ��Ǳ� ���� �̸� ���޹޴� ��
// ��ȯ��(�ڷ���) �Լ��̸�(�Ű�����Ÿ��1 �Ű�������1, ...){
//		�Լ� ȣ�� ��, ������ ��ɹ�;
// }

// �ڱ�Ұ��� ����ϴ� �Լ� ���� :: �̸�(char[]), ����(int), ������(char)
void introduce(char name[], int age, char blood) {
	printf("�̸� :: %s\n", name);
	printf("���� :: %d\n", age);
	printf("������ :: %c\n", blood);
}
int main() {
	// introduce() �Լ��� 3���� ����(char[], int, char)�� �־��ְ�
	// ������ �ؾ� ���� �����
	introduce("jeon_siyu", 27,'o');


}