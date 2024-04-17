#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

int main() {

	// 자판기 프로그램을 작성하시오.
	// 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
	// - 1. 콜라(1000원)
	// - 2. 사이다(1100원)
	// - 3. 포카리 스웨트(1800원)
	// - 4. 레쓰비(800원)
	// - 5. 카페라떼(2500원)
	// - 0.. 실행 종료
	// 사용자가 0을 입력하거나 더 이상 음료를 살 수 없을 때 
	// 거스름돈을 제공하면서 실행 종료하라

	int coin = 0;
	int total = 0;
	int choice;

	printf("동전을 넣어주세요.\n");
	scanf("%d", &coin);

	printf("\n<아래 숫자 중 하나를 입력해주세요.>\n");

	while (1) {
		printf("1.콜라(1000원)\n");
		printf("2.사이다(1100원)\n");
		printf("3.포카리 스웨트(1800원)\n");
		printf("4.레쓰비(800원)\n");
		printf("5.카페라떼(2500원)\n");
		printf("0.실행종료\n");

		scanf("%d", &choice);
		printf("메뉴 선택 :: %d\n", choice);

		if (0 == choice) {
			printf("실행을 종료합니다.\n");
			break;
		}

		if (choice == 1) {
			printf("\n콜라가 제공되었습니다. 남은 금액은 %d입니다.\n", coin -= 1000);
			}
		
		else if (choice == 2) {
			printf("\n사이다가 제공되었습니다. 남은 금액은 %d입니다.\n", coin -= 1100);
		}
		
		else if (choice == 3) {
			printf("\n포카리 스웨트가 제공되었습니다. 남은 금액은 %d입니다.\n", coin -= 1800);
		}
		
		else if (choice == 4) {
			printf("\n레쓰비가 제공되었습니다. 남은 금액은 %d입니다.\n", coin -= 800);

		}
		else if (choice == 5) {
			printf("\n카페라떼가 제공되었습니다. 남은 금액은 %d입니다.\n", coin -= 2500);
		}





	}
}