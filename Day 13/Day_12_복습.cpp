#include<stdio.h>
#include<string.h>

typedef struct Book {
	char name[100];
	char writer[100];
	int price;
	int ISBM;
}Book;

void RaiseBookPrice(Book* a) {
	int p;
	printf("가격을 입력 : ");
	scanf("%d", &p);
	a->price += p;
}

void ChangeWriter(Book* a) {
	char name[50];
	printf("작가 입력 : ");
	scanf("%s", &name);
	strcpy(a->writer, name);
}


int main() {
	
	Book a = { "mega", "study",15000,1234 };

	RaiseBookPrice(&a);
	ChangeWriter(&a);
	printf("작가 : %s\n제목 : %s\n가격 : %d\nISBN : %d", a.writer, a.name, a.price, a.ISBM);

	return 0;
}