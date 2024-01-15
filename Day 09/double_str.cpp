//double_str - 2
//속성 -> C/C++ -> 전처리기 -> 입력    _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	/*char coffee[3][10] = {
		"americano",
		"latte",
		"valina",
	};

	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}*/


	char coffee[3][50];

	for (int i = 0; i < 3; i++) {
		printf("영어로 커피 입력 : ");
		scanf("%s", &coffee[i]);
		getchar();
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}
	

	return 0;
}