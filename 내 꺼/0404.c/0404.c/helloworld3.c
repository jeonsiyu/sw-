#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// �������� :: &, && / l, ll / !

	// ���� :: ������ �Է¹ް�, �̿� �˸´� ������ ���Ͽ���,
	// (90~100-> A / 80~89-> B / 70~79->C / 60~69-> D / 0~59-> F)

	int score;
	printf("������ �Է��ϼ���.(0~100�� ����)");
	scanf("%d",&score);

	// 2. �Է°��� ���ϴ� ������ ����� ���
	// &, && :: "�׸���" ,
	//		2���� ���ǽ� �� �ϳ��� �����̸� false ����� ��Ÿ��
	//		&�� 2���� ���ǽ��� ��� �Ǻ�
	//		&&�� ù��° ���� ������� ���� �ι�° ���� �������ְ� �� �� ���� ����
	//      ���ǹ����� ���ǽ��� �ϳ��� �� �ʿ�� ������ �������� ����ؾߵ�
	printf("<<�������� ���>>\n");
	if (90 <= score && score <= 100) {		// ������ A�� ��� (90 <= score <= 100)
		// score�� 90 �̻��̰� 100 ������ ��
		printf("A�Դϴ�.\n");
	}
	if (80 <= score && score < 90) {
		printf("B�Դϴ�.\n");
	}
	if (70 <= score && score < 80) {
		printf("C�Դϴ�.\n");
	}
	if (60 <= score && score < 70) {
		printf("D�Դϴ�.\n");
	}
	if (0 <= score && score < 60) {
		printf("F�Դϴ�.\n");
	}
	// �����Ǿ��ִ� if�� 5���� 
	//if - else if - else ������ �����ؼ� �ۼ����ּ��� (�����ϸ鼭 �������� ��� x)

	// 95(A), 85(B), 75(C), 65(D), 5(F)
	printf("<<if-else if-else�� ���>>\n");
	if (90 <= score) {
		printf("A�Դϴ�.\n");
	}
	else if (80 <= score) {
		printf("B�Դϴ�.\n");
	}
	else if (70 <= score) {
		printf("C�Դϴ�.\n");
	}
	else if (60 <= score) {
		printf("D�Դϴ�.\n");
	}
	else {
		printf("F�Դϴ�.\n");
	}
}
}