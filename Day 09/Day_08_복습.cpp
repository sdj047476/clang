#include<stdio.h>

int main() {

	char alpha[100];
	int count = 0;
	while (1) {

		char a;
		printf("���ĺ��� �Է�(0�Է½� ����) : ");
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
		printf("�ҹ��� ���ĺ� �Է� / ������ �ʹٸ� 0 �Է� : ");
		scanf_s("%c", &alpha);
		getchar();
		Capital[] += (char)((int)alpha - 32);

		if (alpha == 0) break;
	}*/


	return 0;
}