//str - 1

#include<stdio.h> // printf and scnaf_s....
#include<string.h> //���ڿ� ���� �Լ���

int main() {

	//char A[30];
	//printf("'icecream' ���� ����");
	//scanf("%s", &A); // scanf_s("%s", &A, sizeof(A)); if you want use (scanf_s) do it like this
	//printf("%s", A);

	/*char B[30];
	printf("���� �ܾ� �Է� : ");
	scanf("%s", &B);

	for (int i = 0; i <= sizeof(B)/sizeof(char); i++) {
		if (B[i] == '\0') break;
		if (i % 2 == 0) {
			B[i + 1] = 'a';
		}

	}
	printf(B);*/

	
	//char coffee[20];
	//printf("Ŀ�� �Է�:");
	////scanf("%s", &coffee); // ���� �ν� ����
	//gets_s(coffee);
	//printf("%s", coffee);


	char bread[] = "icebread";
	
	//���ڿ� ���õ� �Լ� str~
	//string-length ���Ӹ�
	printf("%s�� ���̴� %d", bread, strlen(bread));
	printf("%s�� ���̴� %d", bread, sizeof(bread));






	return 0;
}