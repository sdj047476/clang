
//Operator: ������

#include<stdio.h>

int main() {

	//100������ ���� ������ �Է¹ް� 10�ڸ��� 1���ڸ��� ����ϴ� ���α׷�

	//int Number;
	//printf("100������ ���� ���� : ");
	//scanf_s("%d", &Number);
	//printf("10�� �ڸ����� %d, 1�� �ڸ����� %d.", Number / 10, Number % 10);
	

	//�� ������ �Է¹ް�, ū �� ����ϱ�

	int a, b;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &b);
	int bigger = a > b ? a : b;
	printf("�� ū ���� %d", bigger);




	//���� ���� �Է¹ް�, 70�̻��̸� A, �ƴϸ� F
	/*int eng;
	printf("���� ����:");
	scanf_s("%d", &eng);
	printf("�ᰡ�� %c�Դϴ�.", eng > 70 ? 'A': 'F');*/





	return 0;
}