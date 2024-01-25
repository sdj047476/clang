#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Coffee {
	char name[50];
	int price;
};

typedef struct Node {
	struct Node* prev;
	struct Node* next;
	Coffee data;
};

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	char Namedata[50];
	printf("커피 입력. ");
	scanf("%s", &Namedata);
	strcpy(newNode->data.name, Namedata);
	int pricedata;
	printf("커피 가격 입력. ");
	scanf("%d", &pricedata);
	newNode->data.price = pricedata;
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
		printf("[커피 이름: %s , 커피 가격: %d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[커피 이름: %s , 커피 가격: %d]\n", searcher->data.name, searcher->data.price);
}

void deleteLastNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	Node* target = searcher->next;
	printf("%s를 데이터에서 삭제합니다.\n", searcher->next->data.name);
	free(target);
	searcher->next = NULL;
}

void deleteNode(Node** head) {
	Node* temp = *head;
	Node* prev = NULL;
	char target[50];
	printf("삭제하고 싶은 커피. ");
	scanf("%s", target);

	// 리스트를 순회하면서 해당 커피를 찾는다.
	while (temp != NULL) {
		if (strcmp(temp->data.name, target) == 0) {
			if (prev == NULL) {
				*head = temp->next;
				if (*head != NULL) {
					(*head)->prev = NULL;
				}
			}
			else {
				prev->next = temp->next;
				if (temp->next != NULL) {
					temp->next->prev = prev;
				}
			}
			free(temp);
			return;
		}
		prev = temp;
		temp = temp->next;
	}
}

int main() {
	Node* head = NULL;

	while (1) {
		int system;
		printf("1. 커피 추가\n2. 커피 메뉴 확인\n3. 마지막 메뉴 삭제\n4.프로그램 종료\n");
		printf("번호 입력. ");
		scanf("%d", &system);

		switch (system) {

		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(&head);
			break;
		case 3:
			deleteLastNode(&head);
			break;
		case 4:
			deleteNode(&head);
			break;
		case 5:
			printf("종료");
			return 0;
		}
	}
}
