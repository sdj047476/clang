#include<stdio.h>

void swapNumber(int* x, int* y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

void swapChar(char* x, char* y) {
	char z;
	z = *x;
	*x = *y;
	*y = z;
}

int main() {

	int a = 10, b = 20;
	printf("%d  %d\n", a, b);
	swapNumber(&a, &b);
	printf("%d  %d\n", a, b);

	char c = 'm', d = 'n';
	printf("%c  %c\n", c, d);
	swapChar(&c, &d);
	printf("%c  %c\n", c, d);

	return 0;
}