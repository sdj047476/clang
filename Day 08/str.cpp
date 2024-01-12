//str - 1

#include<stdio.h> // printf and scnaf_s....
#include<string.h> //문자열 고유 함수들

int main() {

	//char A[30];
	//printf("'icecream' 따라 적기");
	//scanf("%s", &A); // scanf_s("%s", &A, sizeof(A)); if you want use (scanf_s) do it like this
	//printf("%s", A);

	/*char B[30];
	printf("영어 단어 입력 : ");
	scanf("%s", &B);

	for (int i = 0; i <= sizeof(B)/sizeof(char); i++) {
		if (B[i] == '\0') break;
		if (i % 2 == 0) {
			B[i + 1] = 'a';
		}

	}
	printf(B);*/

	
	//char coffee[20];
	//printf("커피 입력:");
	////scanf("%s", &coffee); // 띄어쓰기 인식 못함
	//gets_s(coffee);
	//printf("%s", coffee);


	char bread[] = "icebread";
	
	//문자에 관련된 함수 str~
	//string-length 줄임말
	printf("%s의 길이는 %d", bread, strlen(bread));
	printf("%s의 길이는 %d", bread, sizeof(bread));






	return 0;
}