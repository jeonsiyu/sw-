#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// ���� ������ �Է¹޾� 90~100 A, 80~89�� B, 70~79�� C, 60~69�� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
	// ù°�ٿ� ���� ������ �־�����. ���������� 0���� ũ�ų� ����, 100���� �۰ų� �����̴�.
	// ���� ������ ����Ѵ�.

	int score;
		scanf("%d", &score);
		if (score <= 100) { printf("A\n"); }

		if (score >= 89, score <= 80) { printf("B\n"); }

		if (score >= 79, score <= 70) { printf("C\n"); }

		if (score >= 69, score <= 60) { printf("D\n"); }

		if (score >= 59) { printf("F\n"); }

}
