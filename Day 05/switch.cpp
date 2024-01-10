//switch - 2
#include<stdio.h>

int main() {

	/*char alpha;
	printf("알파벳 입력");
	scanf_s("%c", &alpha);

	switch (alpha) {
	case 'a':
		printf("a를 선택하셨군요!");
		break;
	case 'b':
		printf("b를 선택하셨군요!");
		break;
	default:
		printf("선택하신 알파벳이 없음");
		break;
	}*/


	// 1. 유저에게 1~3까지 입력받고, 1을 입력하면 1월입니다. 2를 입력하면 2월입니다.....

	/*char N;
	printf("1,2,3중 하나 골라");
	scanf_s("%c", &N);

	switch (N) {
	case '1':
		printf("1월 입니다.");
		break;
	case '2':
		printf("2월 입니다.");
		break;
	case '3':
		printf("3월 입니다.");
		break;
	default:
		printf("오류. 1,2,3 중 하나만 고르시오");
		break;
	}*/

	// 2. 유저에게 두 수의 정수를 입력받고, +/-/*을 입력받고 두 수의 (합/차/곱)을 나타내는 프로그램

	/*int NumF, NumS;
	char O;
	printf("첫번째 수 입력 : ");
	scanf_s("%d", &NumF);
	getchar();
	printf("두번째 수 입력 : ");
	scanf_s("%d", &NumS);
	getchar();
	printf("+/-/*중 하나 선택 : ");
	scanf_s("%c", &O);

	switch (O) {
	case '+':
		printf("두 수의 합은 %d", NumF + NumS);
		break;
	case '-':
		printf("두 수의 차는 %d", NumF - NumS);
		break;
	case '*':
		printf("두 수의 곱은 %d", NumF * NumS);
		break;
	default:
		printf("오류");
		break;
	}*/

	
	return 0;
}
