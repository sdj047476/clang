#include<stdio.h>

int main() {

	// �ϳ��� ���� ���� N�� �޾� 1���� N������ Ȧ���� ���� ����ϴ� ���α׷�

	/*int N;
	printf("���� ���� : ");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 1) printf("%d\n", i);
	}*/

	// 0~100 ������ ������ �ݺ��ؼ� �Է� �޾�, �հ�, ���, ������ ����ϴ� ���α׷�

	/*int A;
	int sum = 0, avg = 0, count = 0;
	while (1) {
		printf("0~100 ������ ���� : ");
		scanf_s("%d", &A);

		if (A > 0 && A <= 100) {
			sum += A;
			count++;
		}
		else if (A <= 0) {
			break;
		}
		else {
			break;
		}
	}
	printf("�հ�:%d,���:%.2lf,����:%d", sum, sum / count, count);*/

	// ��Ģ���� ���α׷� �����

	int codeNumber;
	while (1) {
		printf("1.���ϱ�\n2.����\n3.���ϱ�\n4.������\n5.����\n��ȣ �Է�:");
		scanf_s("%d", &codeNumber);

		switch (codeNumber) {
		case 1:
			int a, b;
			printf("ù��° ���� �Է�:");
			scanf_s("%d", &a);
			printf("�ι�° ���� �Է�:");
			scanf_s("%d", &b);
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 2:
			int c, d;
			printf("ù��° ���� �Է�:");
			scanf_s("%d", &c);
			printf("�ι�° ���� �Է�:");
			scanf_s("%d", &d);
			printf("%d - %d = %d\n", c, d, c - d);
			break;
		case 3:
			int e, f;
			printf("ù��° ���� �Է�:");
			scanf_s("%d", &e);
			printf("�ι�° ���� �Է�:");
			scanf_s("%d", &f);
			printf("%d * %d = %d\n", e, f, e * f);
			break;
		case 4:
			int g, h;
			printf("ù��° ���� �Է�:");
			scanf_s("%d", &g);
			printf("�ι�° ���� �Է�:");
			scanf_s("%d", &h);
			printf("%d / %d = %d\n", g, h, g / h);
			break;
		case 5:
			printf("���α׷� ����");
			return 0;
		default:
			printf("���ڸ� �߸� �Է� �Ͽ����ϴ�. �ٽ� �Է�\n");

		}
	}

	return 0;
}


