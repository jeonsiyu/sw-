#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 출력과 입력 :: prntf(), scanf()
	// 문자, 문자열 입력 :: getchar(cahr), gets(char[]) -> 설명x

	// %c 쪽에 공백값('\0')이나 줄바꿈값('\n')이 들어가는 경우 발생 -> 떼어내서 입력할 수 있음
	//  => 값들을 구분하려다가, 입력 충돌이 발생 할 수도 있다.
	// => rewind(stdin) :: 버퍼를 비워줌, 입력 충돌 방지

	int num;
	char ch, c;
	scanf("%d %c", &num, &ch, &c);
	rewind(stdin);  // 버퍼에 int형 입력	-> num으로 이동
					// '\n'이 있는 버퍼 비워줌	
					// char형 입력받고, 원활하게 ch로 이동됨
	scanf("%c", &c);
	printf("%d %c", num, ch, c);

	// rewind(stdin) ::  "버퍼를 비워주는 역할"
				   // 버퍼 :: scanf()와 같은 입력문을 통해, 입력값들을 임시로 저장하는 공간		
				   // 충돌되는 부분을 떼어내서 입력 할 떄 사용






}