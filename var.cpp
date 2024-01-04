//var

#include<stdio.h>

int main() {
	
	//변수[기억 시켜주는 곳]
	//int today = 04; // int -> 정수___%d
	//float stock = 2124.6; // float -> 실수___%f (수가 좀 클 경우 계산이 약간 이상하게 된다.)
	//double height = 183.5; // double -> 실수 (범위가 float 보다 크다)___%lf
	//char coffee_size = 'L'; // char -> 문자 (알파벳 or 특수문자 가능)___%c

	int today = 4;
	float nasdaq = 14592.21;
	double bitcoin = 56210966.91;
	char coffee_size = 'L';
	printf("오늘은 %d일 입니다. 나스닥 주식은 %.2f이고, 비트코인 가격은 %.2lf이고, 오늘 커피 사이즈 주문은 %c입니다.", today, nasdaq, bitcoin, coffee_size);




	
							
							//printf("오늘 날짜는 %d일입니다.", today);





	return 0;
}