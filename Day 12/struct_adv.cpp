// struct_adv - 2

#include<stdio.h>
#include<string.h>

// 타입을 정의하셌다(별명짓겠다)
//typedef int Umm; // int를 Umm라고 함

typedef struct Coffee {
	char name[50];
	int price;
	int shots;	
} Coffee;

void raiseCoffeePrice(Coffee* coffee, int price) {
	coffee->price += price;
}





int main() {
	Coffee menu[3] = {
		{"Americano",6500,2},
		{"Signature",9000,1},
		{"Today",5000,2},
	};

	raiseCoffeePrice(&menu[0], 5000);
	raiseCoffeePrice(&menu[1], 2000);
	raiseCoffeePrice(&menu[2], 1000);

	for (int i = 0; i < 3; i++) {
		printf("%d.\nCoffe Menu : %s\nCoffee Price : %d won\nCoffee Shots : %d shots\n\n", i + 1, menu[i].name, menu[i].price, menu[i].shots);
	}



}

