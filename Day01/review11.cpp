#include<stdio.h>

int main() {
	// 1.포인터를 이용해서 변수 a를 10 만들기
	int a;
	int* pa = &a;
	*pa = 10;
	printf("%d\n", a);

	// 2.더블포인터를 이용해서 변수 b를 20만들기
	int b;
	int* pb = &b;
	int** ppb = &pb;
	**ppb = 20;
	printf("%d\n", b);

	// 3.정수형 배열[5]에서 포인터를 사용해 5의 배수 만들기
	int arr[5];
	int* parr = &arr[0];
	for (int i = 0; i < 5; i++) {
		*(parr + 1) = 5 + 5 * i;
	}

	// 4.정수형 이중배열[3][4]에서 포인터를 사용해서 1~12 채우기
	int arr2[3][4];
	int* parr2;
	parr2 = &arr2[0][0];
	for (int i = 0; i < 12; i++) {
		*(parr2+i)
	}

	// 5.문자형 이중배열[4][20]에서 각각 좋아하는 커피이름 채우고 전부 보여주기



}