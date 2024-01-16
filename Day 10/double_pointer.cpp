//double_pointer - 2
#include<stdio.h>

int main() {

	int x = 10;

	int* px;
	px = &x;

	int** ppx;
	ppx = &px;

	printf("%d\n", &px);
	printf("%d\n", ppx);
	printf("%d\n", **ppx);






	return 0;
}
