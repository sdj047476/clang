//Day 04 - 1
#include<stdio.h>

int main() {
	
	//1000������ ������ �Է¹ް� ��� ���ʷ� ��Ÿ���� ���α׷�
	
	/*int Num;
	printf("1000������ ����:");
	scanf_s("%d", &Num);
	
	int Min = Num / 60;
	int Sec = Num % 60;
	printf("%d�� %d��", Min, Sec);*/

	//10000 ~ 99999 ������ �Է��ϸ� ���� �ڸ��� ����ϴ� ���α׷�

	int Num10000;
	printf("10000 ~ 99999 ����:");
	scanf_s("%d", Num10000);

	int NumOver100 = Num10000 / 100;
	int Num100 = NumOver100 % 10;
	printf("���� �ڸ��� %d", Num100);

	return 0;
}

