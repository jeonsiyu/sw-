#include<stdio.h>

int main() {
	// 연산자
	// 1) 대입연산자 :: =
	// 2) 산술연산자 :: +, - *, /,% 
	//				-> 복합 대입 연산자 :: +=,-=,*=,/=, %=
	int n1 = 3, n2 = 5;
	printf("n1= %d, n2=%d\n", n1, n2);
	// n1 = n1 + n2;
	n1 += n2;
	printf("n1= %d, n2=%d\n", n1, n2);
	
	// 3) 증감연산자 :: ++(1증가), --(1감소)
	//		위치에 따라서 값을 전달 / 1증가 또는 1감소 수행 순서 변동
	int plus = 0;
	// plus++; // 1증가되고 
	// printf("plus의 현재 값 :: % d", plus);
	printf("plus의 현재 값 :: %d\n", plus++);
	printf("plus의 현재 값 :: %d\n", ++plus);

	// 4) 비교연산자 :: <, <=, >, >=, ==(같다), !=(다르다)
	// 5) 삼향연산자 :: ? (조건식에 따라 실행할 명령문 달리함)
	//	(조건식) ?
	//		(참일 때 수행할 명령문): (거짓일 때 수행할 명령문);

	// 조건문 if문 - else문 

	}