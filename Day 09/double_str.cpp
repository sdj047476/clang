//double_str - 2
//�Ӽ� -> C/C++ -> ��ó���� -> �Է�    _CRT_SECURE_NO_WARNINGS

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
		printf("����� Ŀ�� �Է� : ");
		scanf("%s", &coffee[i]);
		getchar();
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n", coffee[i]);
	}
	

	return 0;
}