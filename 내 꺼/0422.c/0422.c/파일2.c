#include <stdio.h>

int main() { 
	// ���Ŀ� ���߾ �������� �Է��� �ѹ��� ���� �� ����
	// fprintf() :: c���� ���ؼ� txt���Ͽ� �Է�
	// fcanf() :: txt ������ ��ĵ(�ҷ�����)

	FILE* fp;
	int age;
	double height;

	fp = fopen("samlpe.txt", "w"); // ���� ���� ���Ͽ���
	if (fp != NULL) {
		printf("���Ͽ��� ����\n");
		// 3���� ���̿� Ű�� �ֻܼ󿡼� �Է� & �Է°� ���Ͽ� �ֱ�
		for (int i = 0; i < 3; i++) {
			printf("%d��° ���� �Է�", i + 1);
			scanf("%d %lf", &age, &height);		//scanf() :: �ֻܼ� �Է�

			// fprintf(FILE*, "���� ������ ����", ���� ��)
			//			:: ���Ŀ� ���� ���� ���Ͽ� �ִ� ����
			fprintf(fp, "%d %lf\n", age, height);
		}
	}
	else {
		printf("���� ���� ����\n");
	}
	rewind(fp);


	int sAge;
	double sHeight;			// ���Ͽ� �ִ� ���� �޾Ƴ� �뵵
	fp = fopen("sample.txt", "r");	//�б���� ��ȯ
	if (fp != NULL) {
		printf("���� ���� ����\n"); 

		for (int i = 0; i < 3; i++) {
			// fscan(FILE*, "���������� ����", ���ϰ��� �޾Ƴ� �����ּ�) 
			//			:: ������ ������ �ҷ����� ����
			fscanf(fp, "%d %lf", &sAge, &sHeight);
			printf("%d��° ����(����,Ű) :: %d, %.1f\n", i + 1, sAge, sHeight);
		}
	}
	else {
		printf("���� ���� ����\n");
	}
}