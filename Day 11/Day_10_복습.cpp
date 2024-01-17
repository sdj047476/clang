#include<stdio.h>

int main() {
	//1. char coffee[3][20]을 선언 후 유저에게 3개의 문자열을 입력 바독, 포인터 배열을 사용해서 각각의 커피 메뉴를 출력하는 프로그램 만들기
	//커피 메뉴 3종류, 20글자 이내
	char coffee[3][20];
	
	//유저에게 메뉴 입력
	for (int i = 0; i < 3; i++) {
		printf("커피 메뉴 입력 : ");
		scanf("%s", &coffee[i]);
		getchar();
	}
	
	//20글자의 포인터 배열
	char(*pc)[20];

	//포인터 배열을 사용한 값 얻기
	for (int i = 0; i < 3; i++) {
		pc = &coffee[i];
		printf("%d번째 메뉴 : %s\n", i + 1, pc);
	}
	
	//2. int a = 10, int b = 20를 선언후, 더블포인터를 선언후 처음에는 a를 가리키는 코드를 만들고 출력후, b로 가리키는 코드로 작성하고 b를 출력하는 코드 만들기
	int a = 10, b = 20;
	int* pt = &a;
	int** ppt = &pt;
	printf("**ppt : %d\n", **ppt);

	//b로 가리키는 코드로 작성
	pt = &b;
	//출력
	printf("**ppt : %d\n", **ppt);


	return 0;
}
