#include<stdio.h>

int main() {

	// 하나의 양의 정수 N을 받아 1부터 N까지의 홀수의 합을 출력하는 프로그램

	/*int N;
	printf("양의 정수 : ");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 1) printf("%d\n", i);
	}*/

	// 0~100 사이의 정수를 반복해서 입력 받아, 합계, 평균, 개수를 출력하는 프로그램

	/*int A;
	int sum = 0, avg = 0, count = 0;
	while (1) {
		printf("0~100 사이의 정수 : ");
		scanf_s("%d", &A);

		if (A > 0 && A <= 100) {
			sum += A;
			count++;
		}
		else if (A <= 0) {
			break;
		}
		else {
			break;
		}
	}
	printf("합계:%d,평균:%.2lf,개수:%d", sum, sum / count, count);*/

	// 사칙연산 프로그램 만들기

	int codeNumber;
	while (1) {
		printf("1.더하기\n2.빼기\n3.곱하기\n4.나누기\n5.종료\n번호 입력:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
		case 1:
			int a, b;
			printf("첫번째 정수 입력:");
			scanf_s("%d", &a);
			printf("두번째 정수 입력:");
			scanf_s("%d", &b);
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 2:
			int c, d;
			printf("첫번째 정수 입력:");
			scanf_s("%d", &c);
			printf("두번째 정수 입력:");
			scanf_s("%d", &d);
			printf("%d - %d = %d\n", c, d, c - d);
			break;
		case 3:
			int e, f;
			printf("첫번째 정수 입력:");
			scanf_s("%d", &e);
			printf("두번째 정수 입력:");
			scanf_s("%d", &f);
			printf("%d * %d = %d\n", e, f, e * f);
			break;
		case 4:
			int g, h;
			printf("첫번째 정수 입력:");
			scanf_s("%d", &g);
			printf("두번째 정수 입력:");
			scanf_s("%d", &h);
			printf("%d / %d = %d\n", g, h, g / h);
			break;
		case 5:
			printf("프로그램 종료");
			return 0;
		default:
			printf("숫자를 잘못 입력 하였습니다. 다시 입력\n");

		}
	}

	return 0;
}


