#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//1. 14681�� (4�и� ����)
	int x, y;
	int quadrant;
	printf("x ���� �Է��ϼ���.\n");
	scanf("%d", &x);
	printf("y ���� �Է��ϼ���.\n");
	scanf("%d", &y);

	if (x > 0 && 0 > y) {
		quadrant = 1;
		printf("%d\n", quadrant);
	}
	else if (x < 0 && y > 0) {
		quadrant = 2;
		printf("%d\n", quadrant);
	}
	else if (x < 0 && y < 0) {
		quadrant = 3;
		printf("%d\n", quadrant);
	}
	else {
		quadrant = 4;
		printf("%d\n", quadrant);
	}
}

	//2. 2753�� (����)




	//3. ����(������, ����)�� �Է� �ް� �ش� ���ڰ� ������( �빮��. �ҹ���) / ���ڿ��� ���° ���������� ����϶�
	// ���� ������(�빮��, �ҹ���_�� �Է¹��� �� , ��ҹ���, ������ ������� ����϶�.
