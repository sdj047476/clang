#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;



int main() {

	/*int n;
	printf("���� n �Է�. ");
	scanf("%d", &n);

	int* arr;
	arr = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		int num;
		printf("%d�� ���� �Է�. ", i + 1);
		scanf("%d", &num);
		arr[i] = num;
	}

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("���� ū ������ %d�Դϴ�.", max);


	free(arr);*/

	////////////////////////////////////////////////////////////////////////

	int n;
	printf("Ŀ�� ���� n �Է�. ");
	scanf("%d", &n);

	Coffee* ptr;

	ptr = (Coffee*)malloc(sizeof(Coffee) * n);

	for (int i = 0; i < n; i++) {
		char newName[50];
		printf("Ŀ�� �̸� �Է�. ");
		scanf("%s", &newName);
		int newPrice;
		printf("Ŀ�� ���� �Է�. ");
		scanf("%d", &newPrice);

		strcpy(ptr[i].name, newName);
		ptr[i].price = newPrice;
	}

	for (int i = 0; i < n; i++) {
		printf("%d��°�� Ŀ�� �̸�: %s\n����: %d\n", i + 1, ptr[i].name, ptr[i].price);
	}


	return 0;
}
