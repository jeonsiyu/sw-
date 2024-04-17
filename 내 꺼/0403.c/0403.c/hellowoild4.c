#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 조건문 :: "조건식의 결과에 따라" 수행할 명령문을 달리 할 때 사용
	// if문(대표적)
	// if문이 있어야지 eles가 적용될수 있으므로 if 다음에 eles가 올것 (역행하여 입력하면 안됨)

	// 예제 :: 시험 절수를 입력 받고, pass인지 Pail인지 출력
	//	    (60점 이상이면 pass)

	// 1. 시험 점수 입력
	int score;
	scanf("%d", &score);

	// 2. pass인지 fail인지 결과 출력 ㅡ> 60점 이상인지 아닌지
	// if(조건식) {
	//  조건식이 성립 할때 수행 할 명령문 나열 // 소괄호 사용
	// }

	//eise{
	// 위 조건문이 성립되지 않을 떄 수행 할 명령문 나열
	// }

	if (score >= 60){ //pass인 경우( 점수가 60이상 일 때)
		printf("Pass입니다.\n");
	}
	else { //fail인 경우( 점수가 60아래 일떄)
		// 위 조건문을 만족하지 않는다면
		printf("Fail입니다.\n");
	}

	if (score >= 60) { //pass인 경우( 점수가 60이상 일 때)
		printf("Pass입니다.\n");
	}
	if (score < 60) { //fail인 경우( 점수가 60아래 일떄)
						// 위 조건문을 만족하지 않는다면
		printf("Fail입니다.\n");
	}
}