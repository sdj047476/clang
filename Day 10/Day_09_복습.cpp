#include<stdio.h>
#include<string.h>

int main() {

	//1. ���� a,b�� ���� �����ϰ� 10�� 20�� ���� ��, �����͸� ����ؼ� ���� ���� �ٲٱ�
	
	/*int a, b;
	a = 10;
	b = 20;
	printf("a: %d, b : %d\n", a, b);
	
	int* pa = &a;
	int* pb = &b;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("a : %d, b : %d\n", a, b);*/
	
	///////////////////////////////////////////////////////////////////////////////////////////////////

	/*char king = 'k';
	char queen = 'q';

	char* pk = &king;
	char* pq = &queen;
	char temp = *pk;
	*pk = *pq;
	*pq = temp;
	printf("%c,%C\n", king, queen);*/

	
	
	//2. ���ڿ� 'americano'�� ���� ��, �������� ���� n�� ���� m�� �Է� �ް�, �ش� n��°�� �ۿ��� m���ڷ� �ٲٱ�
	
	/*int n;
	char m;

	char coffee[] = "americano";
	printf("%s\n", coffee);

	printf("���� �Է�:");
	scanf("%d", &n);
	getchar();
	printf("���ĺ� �Է�:");
	scanf("%c", &m);
	coffee[n-1] = m;
	printf("%s\n", coffee);*/

	//3. ���ڿ� �迭���� �����ʰ� ���� �ְ� 'americano','latte','vanilla' �������� ���ڿ��� �Է¹ް� �ش� Ŀ�Ǹ� �߰��� ��, ���� �����ֱ�
	
	char menu[4][20] = {
		"americano",
		"latte",
		"vanilla",
	};

	char newMenu[20];
	printf("�޴� �߰�: ");
	scanf("%s", newMenu);
	strcpy(menu[3], newMenu); // strcpy(���, ������)

	for (int i = 0; i < 4; i++) {
		printf("%s\n", menu[i]);
	}

	return 0;
}
