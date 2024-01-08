//Day 04 - 1
#include<stdio.h>

int main() {
	
	//1000이하의 정수를 입력받고 몇분 몇초로 나타내는 프로그램
	
	/*int Num;
	printf("1000이하의 정수:");
	scanf_s("%d", &Num);
	
	int Min = Num / 60;
	int Sec = Num % 60;
	printf("%d분 %d초", Min, Sec);*/

	//10000 ~ 99999 정수를 입력하면 백의 자리를 출력하는 프로그램

	int Num10000;
	printf("10000 ~ 99999 정수:");
	scanf_s("%d", Num10000);

	int NumOver100 = Num10000 / 100;
	int Num100 = NumOver100 % 10;
	printf("백의 자리는 %d", Num100);

	return 0;
}

