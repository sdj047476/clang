#include<stdio.h>
#include<stdlib.h>
// ���� �Ҵ�


int main() {

	int num;
	printf("���ϴ� �迭�� ���� �Է�: ");
	scanf("%d", &num);

	int* arr;
	arr = (int*)malloc(num * sizeof(int));
	
	for (int i = 0; i < num; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < num; i++) {
		printf("arr�� %d��: %d\n", i + 1, arr[i]);
	}

	free(arr);

	return 0;
}