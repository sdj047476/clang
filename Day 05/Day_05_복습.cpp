
#include<stdio.h>

int main() {

	// 정수를 입력 받고, 현재 온도 상태 표시

	/*int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("추으므로 실내활동 권장");
	}
	else if (num >= 0 && num < 40) {
		printf("쾌적하므로 실외활동 권장");
	}
	else {
		printf("더우므로 실내활동 권장");
	}*/

	// 두 개의 양의 정수를 입력 받아 제곱관계를 출력하는 프로그램

	/*int numF, numS;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &numF);
	getchar();
	printf("두번째 정수 입력:");
	scanf_s("%d", &numS);

	if (numF * numF == numS) {
		printf("%d * %d = %d", numF, numF, numS);
	}
	else if (numS * numS == numF) {
		printf("%d * %d = %d", numS, numS, numF);
	}
	else {
		printf("none");
	}*/

	// 5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램

	int One, Two, Three, Four, Five;

	printf("첫번째 정수 입력 : ");
	scanf_s("%d", &One);
	getchar();
	printf("두번째 정수 입력 : ");
	scanf_s("%d", &Two);
	getchar();
	printf("세번째 정수 입력 : ");
	scanf_s("%d", &Three);
	getchar();
	printf("네번째 정수 입력 : ");
	scanf_s("%d", &Four);
	getchar();
	printf("다섯번째 정수 입력 : ");
	scanf_s("%d", &Five);
	getchar();

	int sum = 0;

	if (One > 0) {
		sum += One;
	}
	if (Two > 0) {
		sum += Two;
	}
	if (Three > 0) {
		sum += Three;
	}
	if (Four > 0) {
		sum += Four;
	}
	if (Five > 0) {
		sum += Five;
	}

	printf("%d", sum);




	// 특정 범위 정수 판별


	return 0;
}
