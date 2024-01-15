#include<stdio.h>

int main() {

	char alpha[100];
	int count = 0;
	while (1) {

		char a;
		printf("알파벳을 입력(0입력시 종료) : ");
		scanf_s("%c", &a);
		getchar();

		if (a == '0') {
			alpha[count] = '\0';
			break;
		}
		alpha[count] = a - 32;
		count++;

	}

	printf("%s", alpha);











	/*int alpha;
	char Capital[] = "";

	while(1) {
		printf("소문자 알파벳 입력 / 끝내고 싶다면 0 입력 : ");
		scanf_s("%c", &alpha);
		getchar();
		Capital[] += (char)((int)alpha - 32);

		if (alpha == 0) break;
	}*/


	return 0;
}