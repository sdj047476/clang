
#include<stdio.h>

int main() {

	// ������ �Է� �ް�, ���� �µ� ���� ǥ��

	/*int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("�����Ƿ� �ǳ�Ȱ�� ����");
	}
	else if (num >= 0 && num < 40) {
		printf("�����ϹǷ� �ǿ�Ȱ�� ����");
	}
	else {
		printf("����Ƿ� �ǳ�Ȱ�� ����");
	}*/

	// �� ���� ���� ������ �Է� �޾� �������踦 ����ϴ� ���α׷�

	/*int numF, numS;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &numF);
	getchar();
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &numS);

	if (numF * numF == numS) {
		printf("%d * %d = %d", numF, numF, numS);
	}
	else if (numS * numS == numF) {
		printf("%d * %d = %d", numS, numS, numF);
	}
	else {
		printf("none");
	}*/

	// 5���� ������ �Է� �޾�, ����� ������ ���� ���ϴ� ���α׷�

	int One, Two, Three, Four, Five;

	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &One);
	getchar();
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &Two);
	getchar();
	printf("����° ���� �Է� : ");
	scanf_s("%d", &Three);
	getchar();
	printf("�׹�° ���� �Է� : ");
	scanf_s("%d", &Four);
	getchar();
	printf("�ټ���° ���� �Է� : ");
	scanf_s("%d", &Five);
	getchar();

	int sum = 0;

	if (One > 0) {
		sum += One;
	}
	if (Two > 0) {
		sum += Two;
	}
	if (Three > 0) {
		sum += Three;
	}
	if (Four > 0) {
		sum += Four;
	}
	if (Five > 0) {
		sum += Five;
	}

	printf("%d", sum);




	// Ư�� ���� ���� �Ǻ�


	return 0;
}
