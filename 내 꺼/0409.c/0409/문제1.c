#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 2���� ���� n,m�� �Է¹ް�, 
	// n���� m�� ���ڵ� �� 3�� ����� �͸� ���������� ����Ͽ���
	int n, m;
	printf("�ΰ��� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++ ) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
}

}
