#include<stdio.h>

typedef struct Ingredient {
	int shot;
	int caffeine;
	int milk;
}Ingredient;

typedef struct Coffee {
	char name[30];
	int price;
	Ingredient ingredient;
}Coffee;

// 모든 메뉴를 보여주는 함수
void show_menu_info(Coffee* menu, int size) {
	printf("====이디야 메뉴====\n\n");
	for (int i = 0; i < size; i++) {
		printf("%d. %s - %dwon\n", i + 1, (menu + i)->name, (menu + i)->price);
		printf("Shot. %d\nCaffeine. %dmg\nMilk. %dml\n\n", (menu + i)->ingredient.shot, (menu + i)->ingredient.caffeine, (menu + i)->ingredient.milk);
	}
}

// 메뉴를 새롭게 등록하는 함수
void add_menu(Coffee* menu, int* size) {
	printf("Coffee name.");
	scanf("%s", &menu[*size].name);
	printf("Coffee price.");
	scanf("%d", &menu[*size].price);
	printf("Coffee shot.");
	scanf("%d", &menu[*size].ingredient.shot);
	printf("Coffee caffeine.");
	scanf("%d", &menu[*size].ingredient.caffeine);
	printf("Coffee milk.");
	scanf("%d", &menu[*size].ingredient.milk);
	*size += 1;	
}


int main() {

	int size = 3;

	Coffee menu[10] = {
		{"americano",3500,{2,100,0}},
		{"latte",4000,{2,100,100}},
		{"mocha",4500,{2,50,50}},
	};

	show_menu_info(&menu[0], size);
	
	add_menu(&menu[0], &size);

	show_menu_info(&menu[0], size);
	
	return 0;
}