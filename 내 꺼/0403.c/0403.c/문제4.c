#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// 1. ���� 1330��(�� �� ���ϱ�) ���� Ǯ��
	//- �� ���� a�� b�� �־����� �� a�� b�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
	//- ù° �ٿ� A�� B�� �־�����. A�� B�� ���� ��ĭ���� ���еǾ����ִ�.

	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf(">\n");
	}
	else if (a < b) {
		printf("<\n");
	}
	else {
		printf("==\n");
	} // else if ���

	// 2. ���Ǳ� ���α׷��� �ۼ��Ͻÿ� 
	// - ����ڿ��� ������ �Է¹��� ��, ���� ������ ����
	// - 1.�ݶ�(1000��)
	// - 2.���̴�(1100��)
	// - 3.��ī�� ����Ʈ(1800��)
	// - 4.������(800��)
	// - 5.ī���(2500��)
	// - 6.�ݾ��� ����ϴٸ�, ���ᰡ �����Ǿ����� ������� �˸� �� �Ž����� ����ϱ�.�׸��� ���� ����. �ݾ��� �����ϴٸ�, �ݾ��� �������� ������� �˸� �� ���� ����
    
    int coin, choice;
    const int cola_price = 1000;
        const int cider_price = 1100;
        const int pocari_price = 1800;
        const int letchbi_price = 800;
        const int latte_price = 2500;

        // ���� �Է� �ޱ�
        printf("������ �Է��ϼ���: ");
        scanf("%d", &coin);

        // ���� ����
        printf("\n���Ḧ �����ϼ���:\n");
        printf("1. �ݶ� (1000��)\n");
        printf("2. ���̴� (1100��)\n");
        printf("3. ��ī�� ����Ʈ (1800��)\n");
        printf("4. ������ (800��)\n");
        printf("5. ī��� (2500��)\n");
        printf("����: ");
        scanf("%d", &choice);

        // ���õ� ���ῡ ���� ó��
        if (choice == 1) {
            if (coin >= cola_price) {
                printf("�ݶ� �����մϴ�.\n");
                printf("�Ž������� %d���Դϴ�.\n", coin - cola_price);
            }
            else {
                printf("�ݾ��� �����մϴ�.\n");
            }
        }
        else if (choice == 2) {
            if (coin >= cider_price) {
                printf("���̴ٸ� �����մϴ�.\n");
                printf("�Ž������� %d���Դϴ�.\n", coin - cider_price);
            }
            else {
                printf("�ݾ��� �����մϴ�.\n");
            }
        }
        else if (choice == 3) {
            if (coin >= pocari_price) {
                printf("��ī�� ����Ʈ�� �����մϴ�.\n");
                printf("�Ž������� %d���Դϴ�.\n", coin - pocari_price);
            }
            else {
                printf("�ݾ��� �����մϴ�.\n");
            }
        }
        else if (choice == 4) {
            if (coin >= letchbi_price) {
                printf("������ �����մϴ�.\n");
                printf("�Ž������� %d���Դϴ�.\n", coin - letchbi_price);
            }
            else {
                printf("�ݾ��� �����մϴ�.\n");
            }
        }
        else if (choice == 5) {
            if (coin >= latte_price) {
                printf("ī��󶼸� �����մϴ�.\n");
                printf("�Ž������� %d���Դϴ�.\n", coin - latte_price);
            }
            else {
                printf("�ݾ��� �����մϴ�.\n");
            }
        }
        else {
            printf("�߸��� �����Դϴ�.\n");
        }
	

}