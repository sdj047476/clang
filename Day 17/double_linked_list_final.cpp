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
	printf("Ŀ�� �Է�. ");
	scanf("%s", &Namedata);
	strcpy(newNode->data.name, Namedata);
	int pricedata;
	printf("Ŀ�� ���� �Է�. ");
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
		printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
		searcher = searcher->next;
	}
	printf("[Ŀ�� �̸�: %s , Ŀ�� ����: %d]\n", searcher->data.name, searcher->data.price);
}

void deleteLastNode(Node** head) {
	Node* searcher = *head;
	while (searcher->next->next != NULL) {
		searcher = searcher->next;
	}
	Node* target = searcher->next;
	printf("%s�� �����Ϳ��� �����մϴ�.\n", searcher->next->data.name);
	free(target);
	searcher->next = NULL;
}

void deleteNode(Node** head) {
	Node* temp = *head;
	Node* prev = NULL;
	char target[50];
	printf("�����ϰ� ���� Ŀ��. ");
	scanf("%s", target);

	// ����Ʈ�� ��ȸ�ϸ鼭 �ش� Ŀ�Ǹ� ã�´�.
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
		printf("1. Ŀ�� �߰�\n2. Ŀ�� �޴� Ȯ��\n3. ������ �޴� ����\n4.���α׷� ����\n");
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
			deleteLastNode(&head);
			break;
		case 4:
			deleteNode(&head);
			break;
		case 5:
			printf("����");
			return 0;
		}
	}
}
