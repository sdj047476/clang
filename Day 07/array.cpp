// array - 1

#include<stdio.h>

int main() {

	//array [배역]

	////1. 배열 선언 및 초기화
	//int score[5] = { 100,30,40,50,20 };
	////2. 배열 선언 및 초기화
	//int weight[] = { 100,200,300,400,500,600 };
	////3. 배열 선언
	//int height[10];
	////4. 배열의 인덱스의 시작 0!
	//height[0] = 188;



	// 반학생이 5명 있을때, 수학 점수를 5명 입력받고, 반 평균을 구하는 프로그램

	/*int score[5];
	int scoresum = 0;
	for (int i = 0; i <= 4; i++) {
		printf ("학생 점수:");
		scanf_s("%d", &score[i]);
		scoresum += score[i];
	}
	printf("수학 점수 평균 : %.2lf", double(scoresum / 5));*/

	// 키 평균
	/*double height[5];
	double heightsum = 0;
	for (int i = 0; i <= 4; i++) {
		printf("%d번째 학생의 키 : ", i + 1);
		scanf_s("%lf", &height[i]);
		heightsum += height[i];
	}
	printf("키 평균은 %.2lf cm.", double(heightsum / 5));*/


	// 1번째 char배열 선언법 %c로 문자 배열 출력
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0' };
	char coffee[20] = { 'l','a','t','t','e','\0' };
	char megacoffee[20];

	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0'; //null 끝났다는 표시

	for (int i = 0; i < sizeof(it); i++) {
		printf("%c", it[i]);
	}
	for (int i = 0; i < sizeof(coffee); i++) {
		printf("%c", coffee[i]);
	}
	for (int i = 0; megacoffee[i] != '\0'; i++) {
		printf("%c", megacoffee[i]);
	}

	// 2번째 char배열 선언법 %s로 문자 배열 출력
	printf("%s\n", it);




	return 0;
}