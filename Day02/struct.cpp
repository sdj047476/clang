#include<stdio.h>
// struct - 나만의 데이터 타입(구조체)

typedef struct Coffee {
	char name[39];
	double calories;
	int price;
}Coffee;

typedef struct Sushi {
	char sushiname[30];
	char fishname[30];
	double calories;
}Sushi;

int main() {

	/*Coffee americano = { "americano",5,2500 };
	printf("해당 커피의 이름은 %s 칼로리는 %lf 가격은 %d입니다.\n", americano.name, americano.calories, americano.price);*/

	/*Sushi Ebi = { "Ebi","Shrimp",42 };
	printf("해당 초밥의 이름은 %s, 생선의 이름은 %s, 칼로리는 %2.lf입니다.", Ebi.sushiname, Ebi.fishname, Ebi.calories);*/

	// Coffee menu[3]
	// 커피 메뉴를 완성하는 프로그램을 만들기
	/*Coffee menu[3] = {
		{"아메리카노",10,2500},
		{"아이스라떼",115,3000},
		{"바닐라라떼",242,3500},
	};
	for (int i = 0; i < 3; i++) {
		printf("%s %2.lfkcal %d원\n", menu[i].name, menu[i].calories, menu[i].price);
	}*/

	Coffee menu[3];
	for (int i = 0; i < 3; i++) {
		printf("%d. coffee name.", i + 1);
		scanf("%s", &menu[i].name);
		printf("coffee calories.");
		scanf("%lf", &menu[i].calories);
		printf("coffee price.");
		scanf("%d", &menu[i].price);
	}
	for (int i = 0; i < 3; i++) {
		printf("%s %2.lfkcal %d원\n", menu[i].name, menu[i].calories, menu[i].price);
	}

	return 0;
}