#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// ��°� �Է� :: prntf(), scanf()
	// ����, ���ڿ� �Է� :: getchar(cahr), gets(char[]) -> ����x

	// %c �ʿ� ���鰪('\0')�̳� �ٹٲް�('\n')�� ���� ��� �߻� -> ����� �Է��� �� ����
	//  => ������ �����Ϸ��ٰ�, �Է� �浹�� �߻� �� ���� �ִ�.
	// => rewind(stdin) :: ���۸� �����, �Է� �浹 ����

	int num;
	char ch, c;
	scanf("%d %c", &num, &ch, &c);
	rewind(stdin);  // ���ۿ� int�� �Է�	-> num���� �̵�
					// '\n'�� �ִ� ���� �����	
					// char�� �Է¹ް�, ��Ȱ�ϰ� ch�� �̵���
	scanf("%c", &c);
	printf("%d %c", num, ch, c);

	// rewind(stdin) ::  "���۸� ����ִ� ����"
				   // ���� :: scanf()�� ���� �Է¹��� ����, �Է°����� �ӽ÷� �����ϴ� ����		
				   // �浹�Ǵ� �κ��� ����� �Է� �� �� ���






}