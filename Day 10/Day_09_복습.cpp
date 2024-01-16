#include<stdio.h>
#include<string.h>

int main() {

	//1. 변수 a,b를 각각 선언하고 10과 20을 넣은 후, 포인터를 사용해서 서로 숫자 바꾸기
	
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

	
	
	//2. 문자열 'americano'를 선언 후, 유저에게 정수 n과 문자 m를 입력 받고, 해당 n번째의 글에서 m문자로 바꾸기
	
	/*int n;
	char m;

	char coffee[] = "americano";
	printf("%s\n", coffee);

	printf("정수 입력:");
	scanf("%d", &n);
	getchar();
	printf("알파벳 입력:");
	scanf("%c", &m);
	coffee[n-1] = m;
	printf("%s\n", coffee);*/

	//3. 문자열 배열에서 오른쪽과 같이 있고 'americano','latte','vanilla' 유저에게 문자열을 입력받고 해당 커피를 추가한 후, 전부 보여주기
	
	char menu[4][20] = {
		"americano",
		"latte",
		"vanilla",
	};

	char newMenu[20];
	printf("메뉴 추가: ");
	scanf("%s", newMenu);
	strcpy(menu[3], newMenu); // strcpy(어디에, 무엇을)

	for (int i = 0; i < 4; i++) {
		printf("%s\n", menu[i]);
	}

	return 0;
}
