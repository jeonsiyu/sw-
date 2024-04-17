#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	// 문자(영문자, 숫자)를 입력 받고 해당 문자가 영문자(대문자, 소문자) 
	// 숫자에서 몇번째 문자인지를 출력하라
	// 만약 영문자(대문자, 소문자를 입력받을 시 , 대소문자, 반전한 결과값도 출력하라.}

	char ch1;
	int position;

	printf("문자를 입력하세요.(영문자 숫자 중 입력"); 
	scanf("%c", &ch1);

	if (isalpha(ch1)) {
		printf("문자 %c는 대문자 입니다.", ch1);
		printf("문자 %c 입니다.",tolower(ch1));

		position = ch1 - 'A' + 1;
		printf("문자 %c는 대문자 입니다.", ch1);



	}






	


	// 문자를 입력하세요. (영문자, 숫자 중 입력) 44는 숫자에서 4번째 문제 입니다.
	// 문자를 입력하세요 (영문자, 숫자 중 입력). 
}