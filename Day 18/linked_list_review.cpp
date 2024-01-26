#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	Coffee data;
	struct Node* next;
}Node;

Node* createNode() {
	Node* newNode = (Node*)malloc(sizeof(Node));
	char NameData[50];
	printf("커피 이름 입력. ");
	scanf("%s", &NameData);
	int PriceData;
	printf("커피 가격 입력. ");
	scanf("%d", &PriceData);
	strcpy(newNode->data.name ,NameData);
	newNode->data.price = PriceData;
	newNode->next = NULL;
	return newNode;
}

void appendNode(Node** head) {
	Node* newNode = createNode();
	Node* searcher = *head;
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
}

void printNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("커피 이름.%s\n커피 가격.%d\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("커피 이름.%s\n커피 가격.%d\n", searcher->data.name, searcher->data.price);
}


int main() {
	Node* head = NULL;
	appendNode(&head);
	appendNode(&head);
	printNode(&head);
	return 0;
}
