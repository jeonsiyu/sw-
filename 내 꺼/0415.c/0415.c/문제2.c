#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �Ʒ� ���α׷��� �ۼ��Ͽ���.
// - main���� 2�� ���ڸ� �Է¹ޱ�
// - �ϳ��� ������(+, -, *, / , %) �� �ϳ� �Է¹ޱ�
// 
// - �� ��Ģ���꿡 ���� �Լ� 5���� �����ϱ�

// ��ȯ���� ��� int������ �����صα�

// - �� �Լ��� Ȱ���Ͽ�, �Էµ� �������� ����� main���� ����ϱ�

// �̶� / , % �Լ��� ��ȯ���� - 1�� ������, ���� �޽����� ���
// ������ ���꿡���� � ���ڵ� 0���� ���� �� ����.


int add(int num1, int num2) {
	printf("%d+%d=%d\n" ,num1,num2, num1+num2);
}
int subtract(int num1, int num2) {
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
}
int multiply(int num1, int num2) {
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
}
int divide(int num1, int num2) {
	printf("%d/%d=%d\n", num1, num2, num1 / num2);
}
int modulo(int num1, int num2) {
	printf("%d%%d=%d\n", num1, num2, num1 % num2);
}
	


int main() {
	int num1, num2;
	int opr;
	printf("�� ���ڸ� �Է����ּ���.\n"); 
	scanf("%d %d", &num1, &num2);

	printf("������ �Է����ּ���.\n");
	scanf("%d", &opr);

	switch (opr){
		case '+';
		add(num1, num2);
	default:
		break;
	}

	
	add(num1,num2);

}