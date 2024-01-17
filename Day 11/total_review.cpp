//total_review - 1
#include<stdio.h>

int main() {

	int x = 10;
	int* px = &x;
	int** ppx = &px;

	printf("x의 값: %d\n", x);
	printf("x의 값: %d\n", *px);
	printf("x의 값: %d\n", **ppx);

	printf("x의 주소값: %d\n", &x);
	printf("x의 주소값: %d\n", px);
	printf("x의 주소값: %d\n", *ppx);

	printf("px의 값: %d\n", &x);
	printf("px의 값: %d\n", px);
	printf("px의 값: %d\n", *ppx);

	printf("ppx의 포인터값: %d\n", *ppx);
	printf("ppx의 더블 포인터값: %d\n", **ppx);


	return 0;
}
