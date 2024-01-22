#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;



int main() {

	/*int n;
	printf("정수 n 입력. ");
	scanf("%d", &n);

	int* arr;
	arr = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		int num;
		printf("%d번 정수 입력. ", i + 1);
		scanf("%d", &num);
		arr[i] = num;
	}

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("가장 큰 정수는 %d입니다.", max);


	free(arr);*/

	////////////////////////////////////////////////////////////////////////

	int n;
	printf("커피 개수 n 입력. ");
	scanf("%d", &n);

	Coffee* ptr;

	ptr = (Coffee*)malloc(sizeof(Coffee) * n);

	for (int i = 0; i < n; i++) {
		char newName[50];
		printf("커피 이름 입력. ");
		scanf("%s", &newName);
		int newPrice;
		printf("커피 가격 입력. ");
		scanf("%d", &newPrice);

		strcpy(ptr[i].name, newName);
		ptr[i].price = newPrice;
	}

	for (int i = 0; i < n; i++) {
		printf("%d번째의 커피 이름: %s\n가격: %d\n", i + 1, ptr[i].name, ptr[i].price);
	}


	return 0;
}
