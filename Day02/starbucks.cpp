//starbucks
#include<stdio.h>

typedef struct Coffee {
	char name[30];
	int price;
	char size[20];
	int caffeine;
}Coffee;

void raisePrice(Coffee* coffee) {
	coffee->price += 1000;
}

void lessPrice(Coffee* coffee) {
	coffee->price -= 1000;
}

void showinfo(Coffee x) {
	printf("�̸�.%s ����.%d ������.%s ī����.%d", x.name, x.price, x.size, x.caffeine);
}

int main() {

	Coffee a = { "americano",4500,"tall",100 };
	/*Coffee* pCoffee = &a;
	pCoffee->price += 1000;*/
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	printf("�̸�.%s ����.%d��\n", a.name, a.price);
	showinfo(a);







	return 0;
}