#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// ������(point) :: "����Ű�� ��"
	// ������ ������, ����Ű�����ϴ� ������ �ּҰ��� ���´�.
	// *, &

	// ������ ���� ����, �ʱ�ȭ 
	int n = 10; 
	int* num= &n;
	
	//*num ������ ���ؼ�, n�� �ּҰ��� �������� ���� ȣ��0
	printf("n�� �ּҰ� :: %d\n", num);
	printf("n�� �� :: %d\n", *num);
	// * :: �����ִ� �ּҰ����� �ٸ� ������ ����Ŵ

	// ���ڿ��� ����Ű�� ������ ����(char) ���
	char name[] = "Lee_yuna";
	printf("ù��° ���� :: %c\n", name[0]);
	printf("�̸� :: %s\n\n", name);

	char* ptName = name;
	printf("ù��° ���� :: %c\n", *(ptName + 0));
	printf("ù��° ���� :: %c\n", ptName[0]);  // �迭ó���� ��� ����
	printf("�̸� :: %s\n", *ptName);

}