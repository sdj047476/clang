//alocation - 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

	int* arr;
	arr = (int *)malloc(5 * sizeof(int)); // (��ŭ * ������) ����

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	free(arr); // ����


	int* stu_E;
	int a;
	printf("�л� �� �Է�. ");
	scanf("%d", &a);

	stu_E = (int*)malloc(a * sizeof(int));

	for (int i = 0; i < a; i++) {
		int b;
		printf("%d�� �л��� ���� ����. ", i + 1);
		scanf("%d", &b);

		stu_E[i] = b;
	}
	
	int sum = 0;

	for (int i = 0; i < a; i++) {
		sum += stu_E[i];
	}

	printf("%.2lf", double(sum / a));

	free(stu_E);


	return 0;
}