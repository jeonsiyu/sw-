#include <stdio.h> 
int main() {
	// �Ʒ��� ������ �����ϰ� ���ο� �ش��ϴ� ������ ������ �����϶�
	// - ����(age)
	// - Ű(heigh) -> �Ҽ��� ù° �ڸ�
	// - ������(blood)

	// ������ ���� ���� �Ʒ��� ���Ĵ�� ����ϱ�
	// �ȳ��Ͻʴϱ�. OOO�Դϴ�.
	// ���� :: age
	// Ű :: height (cm)
	// ������ :: bloods��

	char *myname;
	int myage;
	double myheigh;
	char mybloods;

	myname = "������";
	myage = 27;
	myheigh = 158.1;
	mybloods = 'o';
	
	// ���� �ʱ�ȭ :: [�ڷ���] [�����̸�] = [��];

	// char *myname =������; 
	// int myage = 27;
	// double myheigh = 158.1;
	// char mybloods = 'o';


	printf("�ȳ��Ͻʴϱ�. %s�Դϴ�\n",myname); // printf("�ȳ��Ͻʴϱ�. �������Դϴ�\n")
	printf("���� :: %d\n",myage);
	printf("Ű :: %.1f(cm)\n", myheigh);
	printf("������ :: %c\n", mybloods);
	printf("�� ��Ź �帳�ϴ�:)\n");

	printf("\n�ȳ��Ͻʴϱ�. %s�Դϴ�\n���� :: %d\nŰ :: %.0f(cm)\n������ :: %c\n�� ��Ź �帳�ϴ�:)\n", myname, myage, myheigh, mybloods);

	






	}
