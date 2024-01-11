
#include<stdio.h>

int main() {

	// 1. 유저에게 입력 받은 정수의 배수의 0~100까지의 합을 구하세요!

	/*int num, num2;
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	num2 = 100 / num;
	int sum = 0;

	for (int i = 1; i <= num2; i++) {
		sum += (i * num);
	}
	printf("%d",sum);*/

	/*int num;
	printf("숫자 ㄱ");
	scanf_s("%d", &num);

	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % num == 0) sum += i;
	}
	printf("sum:%d\n", sum);*/

	//2. 두 정수를 입력받아 0~1000의 두 정수의 공배수 출력하기

	/*int a, b, c, d;
	printf("첫번째 정수 입력 : ");
	scanf_s("%d", &a);
	getchar();
	printf("두번째 정수 입력 : ");
	scanf_s("%d", &b);
	c = a * b;
	d = 1000 / c;

	for (int i = 1; i <= d; i++) {
		printf("%d\n", c * i); // a=2,b=4인 경우 원하는 공배수가 출력이 안됨
	}*/


	// for[개발자가 끝을 알 때] vs while[유저에게 끝을 맡김]
	// if[optional] vs switch[madantory,강제적인]



	// 3. 유저에게 숫자 0을 누르기 전까지 여러 정수를 입력받아 0을 누른후, 지금까지 눌렀던 정수의 합 나타내기

	/*int num;
	int sum = 0;
	while (1) {
		printf("정수 입력(0종료) : ");
		scanf_s("%d", &num);
		sum += num;

		if (num == 0) break;
	}
	printf("sum:%d", sum);*/

	return 0;
}
