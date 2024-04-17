#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 2.자판기 프로그램을 작성하시오
	// - 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
	// - 1.콜라(1000원)
	// - 2.사이다(1100원)
	// - 3.포카리 스웨트(1800원)
	// - 4.레쓰비(800원)
	// - 5.카페라떼(2500원)
	// - 6.금액이 충분하다면, 음료가 제공되었음을 출력으로 알린 뒤 거스름돈 출력하기.그리고 실행 종료. 금액이 부족하다면, 금액이 부족함을 출력으로 알린 뒤 실행 종료

	int coin, choice ;
	 int 콜라 = 1000;
	 int 사이다 = 1100;
	 int 포카리스웨트 = 1800;
	 int 레쓰비 = 800;
	 int 카페라떼 = 2500;
	
	printf("동전을 입력해주세요.");
	scanf("%d",&coin);

	printf("\n음료를 선택해주세요\n");
	printf("1.콜라(1000원)\n");
	printf("2.사이다(1100원)\n");
	printf("3.포카리 스웨트(1800원)\n");
	printf("4.레쓰비(800원)\n");
	printf("5.카페라떼(2500원)\n");

	scanf("%d",&choice);

	if (choice == 1) {
		if (coin >= 콜라) {
			printf("콜라를 제공합니다\n");
			printf("거스름돈은 %d입니다\n", coin - 콜라);
		}
		else {
			printf("금액이 부족합니다\n");
		}
	}
	else if (choice == 2) {
		if (coin >= 사이다) {
				printf("콜라를 제공합니다\n");
				printf("거스름돈은 %d입니다\n", coin - 사이다);
		}
		else {
				printf("금액이 부족합니다\n");

		}
	}
	else if (choice == 3) {
		if (coin >= 포카리스웨트) {
			printf("콜라를 제공합니다\n");
			printf("거스름돈은 %d입니다\n", coin - 포카리스웨트);
		}
		else {
			printf("금액이 부족합니다\n");

		}
	}
	else if (choice == 4) {
		if (coin >= 레쓰비) {
			printf("콜라를 제공합니다\n");
			printf("거스름돈은 %d입니다\n", coin - 포카리스웨트);
		}
		else {
			printf("금액이 부족합니다\n");

		}
	}
	else if (choice == 5) {
		if (coin >= 카페라떼) {
			printf("콜라를 제공합니다\n");
			printf("거스름돈은 %d입니다\n", coin - 카페라떼);
		}
		else {
			printf("금액이 부족합니다\n");

		}
	}
	else {
		printf("잘못된 선택입니다.");
	}


	}