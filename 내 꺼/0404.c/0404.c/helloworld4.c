#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//아스키코드 : 컴퓨터가 문자정보를 파악 할 수 있도록
	//			   문자 정보-특정 숫자를 일대일대응 시킨 약속한 코드
	char alpha; 
	scanf("%c", &alpha);

	 // 'A' :: 65 ,'a' :: 97, '0' :: 48
	 printf("문자로 표현 :: %c\n", alpha);
	 printf("숫자로 표현 :: %d\n", alpha);

// 알파벳 소문자, 대문자, 숫자 0-9중 하나가 주어졌을 때, 
// 주어진 글자의 아스키 코드값을 출력하는 프로그램을 작성하시오.



}