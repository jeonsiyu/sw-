#include <stdio.h>

// ����ü ���� (Student) :: �й�, �̸�, ����(double[3]), ���
typedef struct {
	char num[10];		// �й� (���ڿ�)
	char name[20];		// �̸� (���ڿ�)
	double score[3];	// ���� :: 3���� �� ����O
	double average;		// ���
}Student;

// Student Ÿ�� ������ ������ �̸� ������ �����Ѵ�(�Ű�����)
double get_avr(Student s) {		// stu�� �������� ������, stu�� ��� ���� ����O
	// ��հ� ���� ����
	double sum = 0;		// ����� ���� �� �ʿ��� �հ� ���� (score�� ��� �� ���ؾ� ��)
	for (int i = 0; i < 3; i++) {
		sum += s.score[i];	// ���޹��� ����ü ������ ������ ��� ������
	}
	return sum / 3;		// ��� ���� ����� �������� ��
}

int main() {
	//int a[5];
	//printf("%d", a[1]);		// a�� 1��° ���� ����´�.

	// main ����
	// 3�� �л��� ���� ����ü �迭 ����	-> ����ü �ʿ� 
	Student stu[3];

	// 3�� �л��� �й�, �̸�, ���� 3���� ���������� �Է¹ޱ�
	for (int j = 0; j < 3; j++) {
		printf("%d��° �л��� �й�, �̸�, ����(3��)�� �Է��ϼ���.\n", j + 1);

		scanf("%s", stu[j].num);
		scanf("%s", stu[j].name);
		for (int i = 0; i < 3; i++) {
			scanf("%lf", &stu[j].score[i]);	// score[0], score[1], score[2] ������ �Է�
		}
	}

	// �л��� ����, ���� ��� �����ϱ� (get_avr �Լ� ���)
	// �Ű����� Ÿ�Կ� �°�, stu�� ������ ����
	// get_avr ����� :: ������ ���()
	for (int j = 0; j < 3; j++) {
		stu[j].average = get_avr(stu[j]);
	}

	// �л��� �й�, �̸�, ����� ����ϱ� (stu ������ �ִ� ���� ������)
	for (int j = 0; j < 3; j++) {
		printf("�й� :: %s\n", stu[j].num);
		printf("�̸� :: %s\n", stu[j].name);
		printf("��� :: %.1f\n", stu[j].average);
	}
}


