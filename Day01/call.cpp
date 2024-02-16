//call
#include<stdio.h>

// 이렇게 코드를 짜면 안 바뀜 return 값이 없기 때문이다.
/*void swap(int x, int y) {
	int z;
	z = x;
	x = y;
	y = z;
}*/

void change(int* x, int* y) {
	*x = 7;
	*y = 7;
}

void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap2(char* x, char* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}



int main() {

	int a = 10, b = 5;
	printf("%d %d\n", a, b);
	/*change(&a, &b);
	printf("%d %d\n", a, b);*/
	swap(&a, &b);
	printf("%d %d\n", a, b);


	char c = 'm', d = 'n';
	printf("%c %c\n", c, d);
	swap2(&c, &d);
	printf("%c %c\n", c, d);

	
	return 0;
}