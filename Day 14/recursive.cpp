//recursive - 1
#include<stdio.h>

//Àç±Í ÇÔ¼ö

int facto(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * facto(n - 1);
	}
}


int main() {
	
	printf("%d", facto(5));

	return 0;
}
