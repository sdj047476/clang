// ifelse.cpp - 1

#include<stdio.h>

int main() {


	/*int eng;
	printf("���� ������ �������� : ");
	scanf_s("%d", &eng);

	if (eng >= 90) {
		printf("A");
	}
	else if (eng >= 80) {
		printf("B");
	}
	else if (eng >= 70) {
		printf("C");
	}
	else {
		printf("F ����");
	}*/

	// ������ �Է��ؼ�
	// 90���� ����
	// 90 ����
	// 90~180 �а�
	// 180 ��
	
	int angle;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &angle);
	if (angle < 90) {
		printf("����");
	}
	else if (angle == 90) {
		printf("����");
	}
	else if (angle > 90 && angle < 180) {
		printf("�а�");
	}
	else if (angle == 180) {
		printf("��");
	}
	else {
		printf("�׳� ��");
	}








	return 0;
}


