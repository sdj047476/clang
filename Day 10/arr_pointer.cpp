//arr_pointer - 1
#include<stdio.h>

int main() {

	/*int arr[5] = {2,4,6,8,10};
	printf("%d\n", arr); // �迭�� �ּҰ�
	printf("%d\n", &arr); // �迭�� �ּڰ�
	printf("%d\n", &arr[0]);
	printf("%d\n", &arr[1]);

	printf("%d\n", arr + 1);
	printf("%d\n", *(arr + 1)); // 4

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(arr + i));
	}*/


	/*int* pa;
	pa = &arr[2];
	*pa = 100;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}*/

	/*int arr[4] = { 1,2,3,4 };
	int(*pa)[4] = &arr; // �迭 ������

	for (int i = 0; i < 4; i++) {
		printf("%d ", (*pa)[i]);
	}*/

	int matrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int(*pa)[4] = &matrix[2];
	for (int i = 0; i < 4; i++) {
		printf("%d ", (*pa)[i]);
	}
	printf("\n");

	char menu[4][20] = {
		"cookie",
		"bread",
		"macaron",
		"hotdog",
	};

	char(*ptr)[20] = &menu[2];
	printf("%s\n", ptr);
	(*ptr)[0] = 'k';
	printf("%s\n", ptr);




	return 0;
}
