#include <stdio.h>

// �Լ����� ���� �޾� ���� ��� (�Ű������� ���ؼ� ���� �޾Ƴ��� ���) 
// call by value, call by refernce(������)

// �Լ� ���� :: 2���� �Ǽ� ���� ������ �ް�, ���� ����
void add(double a, double b) {	// 2���� �Ǽ� ������ �Ű����� ���ؼ� �޵��� ���� 
	a += b; // a=a+b a+b�� ����� a�� �����Ѵ�.
}
void plus(double* a, double* b) {
	*a += *b;
}

int main() {
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("���� num1, num2 :: %.1f, %.1f\n", num1, num2);


	// 1. call by value ��� :: num1, num2�� ���� �Լ��� ����(���� ��°�� ����x)
	add(num1, num2);		// �Է°����� �Լ��� ������ ����
				//( ������ �ڿ��� num1=2.5, num2=6.8�� ����, add(2.5, 6.8);���� ����
		// (������ �ڿ��� num1+num2������ ��ü)
	printf("call by value�� num1 �� :: %.1f\n", num1);
	
	// 2. call by referncd(�ּ�) ��� :: num1, num2�� �ּҰ��� �Լ��� ����( ���� ��°�� ����o)
	plus(&num1, &num2);		// ������ �ּҸ� �Լ��� ������ ����
			// num1 = 2.5, num2 = 6.8�̶� �����Ͽ��� add(num1���� ��ü, num2 ���� ��ü);
	printf("call by reference�� num1 �� :: %.1f\n", num1);


}