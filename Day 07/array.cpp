// array - 1

#include<stdio.h>

int main() {

	//array [�迪]

	////1. �迭 ���� �� �ʱ�ȭ
	//int score[5] = { 100,30,40,50,20 };
	////2. �迭 ���� �� �ʱ�ȭ
	//int weight[] = { 100,200,300,400,500,600 };
	////3. �迭 ����
	//int height[10];
	////4. �迭�� �ε����� ���� 0!
	//height[0] = 188;



	// ���л��� 5�� ������, ���� ������ 5�� �Է¹ް�, �� ����� ���ϴ� ���α׷�

	/*int score[5];
	int scoresum = 0;
	for (int i = 0; i <= 4; i++) {
		printf ("�л� ����:");
		scanf_s("%d", &score[i]);
		scoresum += score[i];
	}
	printf("���� ���� ��� : %.2lf", double(scoresum / 5));*/

	// Ű ���
	/*double height[5];
	double heightsum = 0;
	for (int i = 0; i <= 4; i++) {
		printf("%d��° �л��� Ű : ", i + 1);
		scanf_s("%lf", &height[i]);
		heightsum += height[i];
	}
	printf("Ű ����� %.2lf cm.", double(heightsum / 5));*/


	// 1��° char�迭 ����� %c�� ���� �迭 ���
	char it[] = { 'm','e','g','a','s','t','u','d','y','!','\0' };
	char coffee[20] = { 'l','a','t','t','e','\0' };
	char megacoffee[20];

	megacoffee[0] = 'l';
	megacoffee[1] = 'a';
	megacoffee[2] = 't';
	megacoffee[3] = 't';
	megacoffee[4] = 'e';
	megacoffee[5] = '\0'; //null �����ٴ� ǥ��

	for (int i = 0; i < sizeof(it); i++) {
		printf("%c", it[i]);
	}
	for (int i = 0; i < sizeof(coffee); i++) {
		printf("%c", coffee[i]);
	}
	for (int i = 0; megacoffee[i] != '\0'; i++) {
		printf("%c", megacoffee[i]);
	}

	// 2��° char�迭 ����� %s�� ���� �迭 ���
	printf("%s\n", it);




	return 0;
}