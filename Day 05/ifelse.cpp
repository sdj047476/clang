// ifelse.cpp - 1

#include<stdio.h>

int main() {


	/*int eng;
	printf("영어 점수를 적으세요 : ");
	scanf_s("%d", &eng);

	if (eng >= 90) {
		printf("A");
	}
	else if (eng >= 80) {
		printf("B");
	}
	else if (eng >= 70) {
		printf("C");
	}
	else {
		printf("F ㅅㄱ");
	}*/

	// 각도를 입력해서
	// 90이하 예각
	// 90 직각
	// 90~180 둔각
	// 180 평각
	
	int angle;
	printf("각도를 입력하세요 : ");
	scanf_s("%d", &angle);
	if (angle < 90) {
		printf("예각");
	}
	else if (angle == 90) {
		printf("직각");
	}
	else if (angle > 90 && angle < 180) {
		printf("둔각");
	}
	else if (angle == 180) {
		printf("평각");
	}
	else {
		printf("그냥 각");
	}








	return 0;
}


