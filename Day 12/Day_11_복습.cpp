#include<stdio.h>

void square(int *x) {
	*x = *x * *x;
}

int sumArray(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}



int main() {

	int num = 5;
	square(&num);
	printf("%d\n", num);



	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = sumArray(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d", sum);
	
	return 0;
}
