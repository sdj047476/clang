//Day 04 - 2
#include<stdio.h>

int main() {
	
	////1.
	//char a,b;
	//scanf_s("%c", &a); // m
	//getchar(); // enter ��� ����
	//scanf_s("%c", &b); // n
	//printf("%c %c", a, b);

	////2. -> ( ) : ���⵵ �ϳ��� ���ڷ� ���
	//char a, b;
	//scanf_s("%c ", &a); // %c ���� ���� �ֱ�
	//scanf_s("%c", &b);
	//printf("%c %c", a, b);


	//�ƽ�Ű�ڵ�
	
	//char a = 'A';
	//int b = 66;
	//printf("%d %c", a,b); // 65

	//1. ���� �Է��ϸ� ���ĺ� ������

	//int Num;
	//printf("���� �Է�:");
	//scanf_s("%d", &Num);
	//printf("%c", Num);

	////2. �������� ��� ���ڸ� �ް� ���ĺ��̸� 1 �ƴϸ� 0

	//char alpha;
	//int isCapital, isSmall, toAscii;
	//printf("�Է�:");
	//scanf_s("%c", &alpha);
	//toAscii = (int)alpha;

	//isCapital = (65 <= toAscii && toAscii <= 90);
	//isSmall = (97 <= toAscii && toAscii <= 122);

	//printf("%d", isCapital || isSmall ? 1 : 0);




	//3. �빮�� ���ĺ��� �Է��ϸ� �ҹ��ڷ� ����ϱ�

	char capital;
	printf("�빮��:");
	scanf_s("%c", &capital);
	printf("�ҹ���:%c", (char)((int)capital + 32));

	return 0;
}

