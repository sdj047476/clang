//Day 04 - 3
#include<stdio.h>

int main() {
	// control statement (���)
	// �ڵ���� ������ ����

	// 1)conditional statement (���ǹ�)
	// [� �ڵ带 �������� ����]
	// -1) if/ else if/ else
	// -2) switch

	// 20���� ũ�� 30���� ������ �����մϴ� �ߵ���
	//int num;
	//printf("���� �Է�:");
	//scanf_s("%d", &num);

	//if (num > 20 && num < 30) {
	//	printf("�����մϴ�");
	//}
	//printf("����");

	// if ~ else
	//int a;
	//scanf_s("&d", &a);

	//if (a > 0) {
	//	printf("����Դϴ�.");
	//}
	//else {
	//	printf("0 �Ǵ� �����Դϴ�.");
	//}

	//���ĺ� �Է���, ��ҹ��� �Ǻ���
	//char alpha;
	//int toAscii;
	//printf("���ĺ��� ������:");
	//scanf_s("%c", &alpha);
	//toAscii = int(alpha);

	//if (65 <= toAscii && toAscii <= 90) {
	//	printf("�빮���Դϴ�.");
	//}
	//else {
	//	printf("�ҹ����Դϴ�.");
	//}

	//���� �Է� ��, Ȧ¦ �Ǻ���
	int Num, Numone;
	printf("���� �Է�:");
	scanf_s("%d", &Num);
	Numone = Num % 2;
	if (Numone == 0) {
		printf("¦��");
	}
	else {
		printf("Ȧ��");
	}

	return 0;
}

