#include <stdio.h>

// ���� :: �Է� �� num�� ���� ���丮�� �� ��ȯ�ϴ� �Լ��� ����
// 5! = 5*4*3*2*1
// n! = n*(n-1)*...*1;
int fact(int n) {
	printf("%d Ž�� ��\n", n);
	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);

	//	5*fact(4) = 5*(4*fact(3)) = 5*4*(3*fact(2))
	//		= 5*4*3*(2*fact(1)) = 5*4*3*2*1
}

int main() {
	int num;
	scanf("%d", &num);

	int result = fact(num);
	printf("%d", result);

}
