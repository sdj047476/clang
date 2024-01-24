// double_linked_list - 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Coffee {
	char name[50];
	int price;
}Coffee;

typedef struct Node {
	struct Node* prev;
	Coffee data;
	struct Node* next;
}Node;

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	char newName[50];
	printf("Ŀ�� �̸� �Է�. ");
	scanf("%s", &newName);
	int price;
	printf("Ŀ�� ���� �Է�. ");
	scanf("%s", &price);
	strcpy(newNode->data.name, newName);
	newNode->data.price = price;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void appendNode(Node** head) {
	Node* newNode = createNode();
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	Node* searcher = *head;
	while (searcher->next != NULL) {
		searcher = searcher->next;
	}
	searcher->next = newNode;
	newNode->prev = searcher;
}

void printNodes(Node** head) {
	Node* searcher = *head;
	while (searcher->next != NULL) {
		printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
}

int main() {

	Node* head = NULL;

	while (1) {
		int system;
		printf("1. Ŀ�� �߰�\n2. Ŀ�� �޴� Ȯ��\n3. ����\n");
		printf("��ȣ �Է�. ");
		scanf("%d", &system);

		switch (system) {

		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			printf("����");
			return 0;
		}
	}
}
