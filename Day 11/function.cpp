//function - 2
#include<stdio.h>

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multi(int x, int y) {
	return x * y;
}

void printArray(int x[]) {
	for (int i = 0; i < 10; i++) {
		printf(" %d ", x[i]);
	}
}

void swap(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
}

void swap_c(char* x, char* y) {
	char z = *x;
	*x = *y;
	*y = z;
}

int main() {
	/*int a = add(10, 20);
	printf("%d\n", a);

	int b = minus(10, 20);
	printf("%d\n", b);

	int c = multi(10, 20);
	printf("%d\n", c);

	int d[10] = { 1,2,3,4,5 };
	printArray(d);
	printf("\n");*/

	/*int a = 5;
	int b = 8;
	printf("a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);*/

	char a[] = "a";
	char b[] = "b";
	printf("a: %s, b: %s\n", a, b);
	swap_c(&a[0], &b[0]);
	printf("a: %s, b: %s", a, b);

	return 0;
}
