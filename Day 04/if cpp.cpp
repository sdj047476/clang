//Day 04 - 3
#include<stdio.h>

int main() {
	// control statement (제어문)
	// 코드실행 순서를 조작

	// 1)conditional statement (조건문)
	// [어떤 코드를 실행할지 결정]
	// -1) if/ else if/ else
	// -2) switch

	// 20보다 크고 30보다 작으면 축하합니다 뜨도록
	//int num;
	//printf("숫자 입력:");
	//scanf_s("%d", &num);

	//if (num > 20 && num < 30) {
	//	printf("축하합니다");
	//}
	//printf("ㅅㄱ");

	// if ~ else
	//int a;
	//scanf_s("&d", &a);

	//if (a > 0) {
	//	printf("양수입니다.");
	//}
	//else {
	//	printf("0 또는 음수입니다.");
	//}

	//알파벳 입력후, 대소문자 판별기
	//char alpha;
	//int toAscii;
	//printf("알파벳을 쓰세요:");
	//scanf_s("%c", &alpha);
	//toAscii = int(alpha);

	//if (65 <= toAscii && toAscii <= 90) {
	//	printf("대문자입니다.");
	//}
	//else {
	//	printf("소문자입니다.");
	//}

	//정수 입력 후, 홀짝 판별기
	int Num, Numone;
	printf("정수 입력:");
	scanf_s("%d", &Num);
	Numone = Num % 2;
	if (Numone == 0) {
		printf("짝수");
	}
	else {
		printf("홀수");
	}

	return 0;
}

