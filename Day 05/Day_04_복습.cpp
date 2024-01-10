
#include<stdio.h>

int main() {

	//1. 대문자를 입력 소문자 출력, 소문자를 입력 대문자 출력
	/*char alpha;
	int AsciiAlpha;
	printf("대문자 또는 소문자 입력:");
	scanf_s("%c", &alpha);
	AsciiAlpha = int(alpha);
	if (65 <= AsciiAlpha && AsciiAlpha <= 90) {
		printf("%c", char(AsciiAlpha + 32));
	}
	else {
		printf("%c", char(AsciiAlpha - 32));
	}*/

	//2. 하나의 정수를 입력하고 양의 홀수,  양의 짝수, 0, 음의 홀수, 음의 짝수 인지 판별하는 프로그램
	/*int num, Number;
	printf("하나의 정수 입력:");
	scanf_s("%d", &num);
	Number = num % 2;
	if (num > 0) {
		if (Number == 0) {
			printf("양의 짝수 입니다.");
		}
		else {
			printf("양의 홀수 입니다.");
		}
	}
	else {
		if (-(num) % 2 == 0) {
			if (num == 0) {
				printf("0입니다.");
			}
			else {
				printf("음의 짝수 입니다.");
			}
		}
		else {
			printf("음의 홀수 입니다.");
		}
	}*/



	return 0;
}