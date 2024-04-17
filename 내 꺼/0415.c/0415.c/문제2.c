#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 아래 프로그램을 작성하여라.
// - main에서 2개 숫자를 입력받기
// - 하나의 연산자(+, -, *, / , %) 중 하나 입력받기
// 
// - 각 사칙연산에 대한 함수 5개를 구현하기

// 반환형은 모두 int형으로 설정해두기

// - 위 함수를 활용하여, 입력된 연산자의 결과를 main에서 출력하기

// 이때 / , % 함수의 반환값이 - 1일 때에는, 에러 메시지를 출력
// 나눗셈 연산에서는 어떤 숫자든 0으로 나눌 수 없다.


int add(int num1, int num2) {
	printf("%d+%d=%d\n" ,num1,num2, num1+num2);
}
int subtract(int num1, int num2) {
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
}
int multiply(int num1, int num2) {
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
}
int divide(int num1, int num2) {
	printf("%d/%d=%d\n", num1, num2, num1 / num2);
}
int modulo(int num1, int num2) {
	printf("%d%%d=%d\n", num1, num2, num1 % num2);
}
	


int main() {
	int num1, num2;
	int opr;
	printf("두 숫자를 입력해주세요.\n"); 
	scanf("%d %d", &num1, &num2);

	printf("연산을 입력해주세요.\n");
	scanf("%d", &opr);

	switch (opr){
		case '+';
		add(num1, num2);
	default:
		break;
	}

	
	add(num1,num2);

}