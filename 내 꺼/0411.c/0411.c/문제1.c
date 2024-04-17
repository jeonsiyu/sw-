#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 1차원 배열을 활용하여 아래의 프로그램을 만들어라.
	//정보처리기사 필기 응시자의 1~5과목 점수를 "입력받은 뒤"
	//합격 / 불합격 여부를 출력하여라.
	//(합격 / 불합격 여부만 출력하여도 되고,
	//	과락 여부 및 평균 충족 / 미달 여부를 함께 출력하여도 상관없다.)
	//
	//	이때, 정보처리기사 필기 합격 조건은 아래와 같다.
	//	- 각 과목의 점수는 모두 40점 이상이어야 하고
	//	- 5과목 점수의 평균은 60점 이상이어야 한다.

	// 1. 1~5과목 점수를 입력받기
	int subject[5];
	printf("점수를 순차적으로 입력해주세요.\n");
	for (int i = 0; i < 5; i++) {

		scanf("%d", &subject[i]);
	}

	// 2-1. 합격/불합격 여부 출력하기 -> 각 과목의 점수 40점 이상 일것
	//								  -> 5과목의 점수의 평균은 60점 이상이여야 한다.

	int score = 0;
	for (int i = 0; i < 5; i++) {
		if (subject[i] < 40) {
			printf("불합격입니다\n"); // 각 과목 점수가 40점 미만일때 바로 불합격
			return 0;
		}
		else { // 각 과목 점수가 40점 이상일 때 평균을 구하러 가기
			printf("합격\n");
		}
		}

		//int sum = 0;
		//for (int i = 0; i < 5; i++) {
		//	sum += subject[i];
		//	printf("현재 sum 값 :: %d\n", sum);

		//double average = sum / 5.0;
		//if (average >= 60) {
		//	printf("평균은 %f입니다.\n", average);
		//	printf("축하합니다!! 합격입니다.\n");
		//}
		//else {
		//	printf("평균은 %f입니다.\n", average);
		//	printf("불합격입니다..\n");
		//}

	}

}
	
	