//for - 3
// loop statement (반복문)
//코드를 n번 반복

#include<stdio.h>

int main() {

	/*for (int i = 0; i < 10; i++) {
		printf("%d\n", i);
	}*/

	for (int n = 1; n <= 100; n++) {
		if (n % 2 == 1) {
			printf("%d\n", n);
		}
		

	}
		return 0;
}