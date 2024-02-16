#include<stdio.h>

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

void hello() {
	printf("아메리카노 땡긴다.");
	printf("아메리카노 땡긴다.");
	printf("아메리카노 땡긴다.");
}



int main() {

	int a = add(10, 20);

	int b = minus(20, 10);

	printf("%d\n%d\n", a, b);

	hello();

	return 0;
}