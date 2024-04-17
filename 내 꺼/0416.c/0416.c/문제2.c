#include<stdio.h>

// Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하고, m을 반환하는 함수 구현
// 단, 3600이상의 값을 받으면 오류 메시지를 출력한다.
// 그리고 m 값은 반환한다.

int time(int sec) {
	int min = sec / 60;
	int remain_sec = sec % 60;
	if (3600 > sec) {
		printf("%d초는 %d분 %d초입니다.\n", sec, min, remain_sec);
	}
	else{
		printf("잘못된 입력입니다.\n");	 
		return 0;
	}
	printf("남은 초는 %d초입니다.", remain_sec);
	return 0;
}



int main() {
	int sec = 0;
	printf("초를 입력하시오.\n");
	scanf("%d", &sec);
	
	time(sec);



}
