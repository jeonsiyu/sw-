#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	// 1. 백준 1330번(두 수 비교하기) 문제 풀기
	//- 두 정수 a와 b가 주어졌을 때 a와 b를 비교하는 프로그램을 작성하시오
	//- 첫째 줄에 A와 B가 주어진다. A와 B는 공백 한칸으로 구분되어져있다.

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
	} // else if 사용

	// 2. 자판기 프로그램을 작성하시오 
	// - 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
	// - 1.콜라(1000원)
	// - 2.사이다(1100원)
	// - 3.포카리 스웨트(1800원)
	// - 4.레쓰비(800원)
	// - 5.카페라떼(2500원)
	// - 6.금액이 충분하다면, 음료가 제공되었음을 출력으로 알린 뒤 거스름돈 출력하기.그리고 실행 종료. 금액이 부족하다면, 금액이 부족함을 출력으로 알린 뒤 실행 종료
    
    int coin, choice;
    const int cola_price = 1000;
        const int cider_price = 1100;
        const int pocari_price = 1800;
        const int letchbi_price = 800;
        const int latte_price = 2500;

        // 동전 입력 받기
        printf("동전을 입력하세요: ");
        scanf("%d", &coin);

        // 음료 선택
        printf("\n음료를 선택하세요:\n");
        printf("1. 콜라 (1000원)\n");
        printf("2. 사이다 (1100원)\n");
        printf("3. 포카리 스웨트 (1800원)\n");
        printf("4. 레쓰비 (800원)\n");
        printf("5. 카페라떼 (2500원)\n");
        printf("선택: ");
        scanf("%d", &choice);

        // 선택된 음료에 따라 처리
        if (choice == 1) {
            if (coin >= cola_price) {
                printf("콜라를 제공합니다.\n");
                printf("거스름돈은 %d원입니다.\n", coin - cola_price);
            }
            else {
                printf("금액이 부족합니다.\n");
            }
        }
        else if (choice == 2) {
            if (coin >= cider_price) {
                printf("사이다를 제공합니다.\n");
                printf("거스름돈은 %d원입니다.\n", coin - cider_price);
            }
            else {
                printf("금액이 부족합니다.\n");
            }
        }
        else if (choice == 3) {
            if (coin >= pocari_price) {
                printf("포카리 스웨트를 제공합니다.\n");
                printf("거스름돈은 %d원입니다.\n", coin - pocari_price);
            }
            else {
                printf("금액이 부족합니다.\n");
            }
        }
        else if (choice == 4) {
            if (coin >= letchbi_price) {
                printf("레쓰비를 제공합니다.\n");
                printf("거스름돈은 %d원입니다.\n", coin - letchbi_price);
            }
            else {
                printf("금액이 부족합니다.\n");
            }
        }
        else if (choice == 5) {
            if (coin >= latte_price) {
                printf("카페라떼를 제공합니다.\n");
                printf("거스름돈은 %d원입니다.\n", coin - latte_price);
            }
            else {
                printf("금액이 부족합니다.\n");
            }
        }
        else {
            printf("잘못된 선택입니다.\n");
        }
	

}