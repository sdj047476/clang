//Day 04 - 2
#include<stdio.h>

int main() {
	
	////1.
	//char a,b;
	//scanf_s("%c", &a); // m
	//getchar(); // enter 흡수 역할
	//scanf_s("%c", &b); // n
	//printf("%c %c", a, b);

	////2. -> ( ) : 띄어쓰기도 하나의 문자로 취급
	//char a, b;
	//scanf_s("%c ", &a); // %c 다음 띄어쓰기 넣기
	//scanf_s("%c", &b);
	//printf("%c %c", a, b);


	//아스키코드
	
	//char a = 'A';
	//int b = 66;
	//printf("%d %c", a,b); // 65

	//1. 숫자 입력하면 알파벳 나오기

	//int Num;
	//printf("숫자 입력:");
	//scanf_s("%d", &Num);
	//printf("%c", Num);

	////2. 유저에게 어떠한 문자를 받고 알파벳이면 1 아니면 0

	//char alpha;
	//int isCapital, isSmall, toAscii;
	//printf("입력:");
	//scanf_s("%c", &alpha);
	//toAscii = (int)alpha;

	//isCapital = (65 <= toAscii && toAscii <= 90);
	//isSmall = (97 <= toAscii && toAscii <= 122);

	//printf("%d", isCapital || isSmall ? 1 : 0);




	//3. 대문자 알파벳을 입력하면 소문자로 출력하기

	char capital;
	printf("대문자:");
	scanf_s("%c", &capital);
	printf("소문자:%c", (char)((int)capital + 32));

	return 0;
}

