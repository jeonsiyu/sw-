#include <stdio.h> 
int main() {
	// 아래의 변수슷 생성하고 본인에 해당하는 정보를 값으로 설정하라
	// - 나이(age)
	// - 키(heigh) -> 소수점 첫째 자리
	// - 혈액형(blood)

	// 위에서 받은 값을 아래의 형식대로 출력하기
	// 안녕하십니까. OOO입니다.
	// 나이 :: age
	// 키 :: height (cm)
	// 혈액형 :: bloods형

	char *myname;
	int myage;
	double myheigh;
	char mybloods;

	myname = "전시유";
	myage = 27;
	myheigh = 158.1;
	mybloods = 'o';
	
	// 변수 초기화 :: [자료형] [변수이름] = [값];

	// char *myname =전시유; 
	// int myage = 27;
	// double myheigh = 158.1;
	// char mybloods = 'o';


	printf("안녕하십니까. %s입니다\n",myname); // printf("안녕하십니까. 전시유입니다\n")
	printf("나이 :: %d\n",myage);
	printf("키 :: %.1f(cm)\n", myheigh);
	printf("혈액형 :: %c\n", mybloods);
	printf("잘 부탁 드립니다:)\n");

	printf("\n안녕하십니까. %s입니다\n나이 :: %d\n키 :: %.0f(cm)\n혈액형 :: %c\n잘 부탁 드립니다:)\n", myname, myage, myheigh, mybloods);

	






	}
