
#include<stdio.h>

int main() {

	// 1. �������� �Է� ���� ������ ����� 0~100������ ���� ���ϼ���!

	/*int num, num2;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	num2 = 100 / num;
	int sum = 0;

	for (int i = 1; i <= num2; i++) {
		sum += (i * num);
	}
	printf("%d",sum);*/

	/*int num;
	printf("���� ��");
	scanf_s("%d", &num);

	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % num == 0) sum += i;
	}
	printf("sum:%d\n", sum);*/

	//2. �� ������ �Է¹޾� 0~1000�� �� ������ ����� ����ϱ�

	/*int a, b, c, d;
	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &a);
	getchar();
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &b);
	c = a * b;
	d = 1000 / c;

	for (int i = 1; i <= d; i++) {
		printf("%d\n", c * i); // a=2,b=4�� ��� ���ϴ� ������� ����� �ȵ�
	}*/


	// for[�����ڰ� ���� �� ��] vs while[�������� ���� �ñ�]
	// if[optional] vs switch[madantory,��������]



	// 3. �������� ���� 0�� ������ ������ ���� ������ �Է¹޾� 0�� ������, ���ݱ��� ������ ������ �� ��Ÿ����

	/*int num;
	int sum = 0;
	while (1) {
		printf("���� �Է�(0����) : ");
		scanf_s("%d", &num);
		sum += num;

		if (num == 0) break;
	}
	printf("sum:%d", sum);*/

	return 0;
}
