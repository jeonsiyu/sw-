#include<stdio.h>

// Sec(��) ���� �Է¹޾Ƽ� �ð��� h�� m�ʶ�� �� ����ϰ�, m�� ��ȯ�ϴ� �Լ� ����
// ��, 3600�̻��� ���� ������ ���� �޽����� ����Ѵ�.
// �׸��� m ���� ��ȯ�Ѵ�.

int time(int sec) {
	int min = sec / 60;
	int remain_sec = sec % 60;
	if (3600 > sec) {
		printf("%d�ʴ� %d�� %d���Դϴ�.\n", sec, min, remain_sec);
	}
	else{
		printf("�߸��� �Է��Դϴ�.\n");	 
		return 0;
	}
	printf("���� �ʴ� %d���Դϴ�.", remain_sec);
	return 0;
}



int main() {
	int sec = 0;
	printf("�ʸ� �Է��Ͻÿ�.\n");
	scanf("%d", &sec);
	
	time(sec);



}
