#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 森薦 :: 葵("1-3)聖 脊径閤壱, 唖 井酔拭 魚虞 働舛 葵聖 窒径馬虞.

	// 1. 葵 脊径閤奄
	int num;
	printf("1採斗 3猿走税 収切 掻 葵聖 脊径馬獣神.");
	scanf("%d", &num);

	// 2. 唖 井酔拭 魚虞 働舛葵 窒径
	//	1) 脊径葵戚 1昔井酔
	//	2) 脊径葵戚 2昔井酔
	//	3) 脊径葵戚 3昔井酔
	//  4) 1-3 戚須税 脊径葵昔 井酔 (else)

	////if (num == 1) {
	//	//printf("亜是しさし\n");
	////}
	////else if (num == 2) {
	//	//printf("郊是ぞさぞ\n");
	////}
	//else if (num == 3) {
	//	printf("左せさせ\n");
	//}
	//else {
	//	printf("陥獣 脊径馬室推");
	//}
	// switch (痕呪) { }
	// case 葵戚 1:		// 痕呪税 葵戚 葵1昔 "井酔"
	//  痕呪 == 葵1析 凶, 呪楳拝 誤敬庚
	// case 葵戚 2:		// 痕呪税 葵戚 葵2昔 "井酔"
	//  痕呪 == 葵2析 凶, 呪楳拝 誤敬庚
	// ...
	//default:  // eles税 蝕拝
	// 是 井酔亜 乞砧 焼観 井酔, 呪楳拝 誤敬庚;
	// 什是帖澗 繕闇戚 中膳鞠檎 焼掘税 呪楳庚級亀 乞砧 窒径喫
	//		- > 追戚什 原陥 break研 旋嬢操醤喫
		// break; "悪薦 掻舘" -> 薄仙 紗背赤澗 {} 瞬聖 纏窒

	switch (num) {
	case 1: //num ==1戚虞檎
		printf("亜是しさし\n");
		break;
	case 2: //num == 2戚虞檎,
		printf("郊是しさ\n");
		break;
	case 3: //num == 3戚虞檎,
		printf("左せさせ\n");
		break;

	default: //else
		printf("陥獣 脊径馬室推\n");




	}

}