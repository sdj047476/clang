// struct - 1
#include<stdio.h>
#include<string.h>
struct Coffee {
	char name[50];
	int price;
	int shots;
};

// 학생 구조체 이름, 학과, 학번,

struct Student {
	char name[50];
	char major[50];
	int ID;
	struct Coffee coffee;
};




int main() {
	
	struct Coffee a;
	a.price = 2500;
	strcpy(a.name, "americano");
	a.shots = 2;
	printf("%d\n", a.price);
	printf("%s %d %d\n", a.name, a.price, a.shots);
	

	struct Student kim;
	strcpy(kim.major, "computer");
	strcpy(kim.name, "Kim");
	kim.ID = 373737373737;
	kim.coffee = a;
	printf("kim's name:%s\nkim's major:%s\nkim's coffee:%s", kim.name, kim.major, kim.coffee.name);



}