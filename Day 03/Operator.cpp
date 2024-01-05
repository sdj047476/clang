
//Operator: 연산자

#include<stdio.h>

int main() {

	//100이하의 양의 정수를 입력받고 10자리와 1의자리를 출력하는 프로그램

	//int Number;
	//printf("100이하의 양의 정수 : ");
	//scanf_s("%d", &Number);
	//printf("10의 자리수는 %d, 1의 자리수는 %d.", Number / 10, Number % 10);
	

	//두 정수를 입력받고, 큰 수 출력하기

	int a, b;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &a);
	printf("두번째 정수 입력:");
	scanf_s("%d", &b);
	int bigger = a > b ? a : b;
	printf("더 큰 수는 %d", bigger);




	//영어 점수 입력받고, 70이상이면 A, 아니면 F
	/*int eng;
	printf("영어 점수:");
	scanf_s("%d", &eng);
	printf("결가는 %c입니다.", eng > 70 ? 'A': 'F');*/





	return 0;
}