#include<stdio.h>

// a���� b���� ���ϴ� �Լ��� �����
// ax2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
// ����
// 1x2x3x4x5
// total = 120

int sum(int a, int b) {
	int total = 1;
	for (int i = a; i <= b; i++) {
		total *= i;
	}
	return total;

}

int main() {
	int a, b;
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &a,&b);

	printf("total = %d\n", sum(a, b));

}