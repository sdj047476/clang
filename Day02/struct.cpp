#include<stdio.h>
// struct - ������ ������ Ÿ��(����ü)

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
	printf("�ش� Ŀ���� �̸��� %s Į�θ��� %lf ������ %d�Դϴ�.\n", americano.name, americano.calories, americano.price);*/

	/*Sushi Ebi = { "Ebi","Shrimp",42 };
	printf("�ش� �ʹ��� �̸��� %s, ������ �̸��� %s, Į�θ��� %2.lf�Դϴ�.", Ebi.sushiname, Ebi.fishname, Ebi.calories);*/

	// Coffee menu[3]
	// Ŀ�� �޴��� �ϼ��ϴ� ���α׷��� �����
	/*Coffee menu[3] = {
		{"�Ƹ޸�ī��",10,2500},
		{"���̽���",115,3000},
		{"�ٴҶ��",242,3500},
	};
	for (int i = 0; i < 3; i++) {
		printf("%s %2.lfkcal %d��\n", menu[i].name, menu[i].calories, menu[i].price);
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
		printf("%s %2.lfkcal %d��\n", menu[i].name, menu[i].calories, menu[i].price);
	}

	return 0;
}