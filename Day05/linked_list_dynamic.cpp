#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

Node* createNode() {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	printf("new Node.");
	scanf("%d", &newNode->data);
	newNode->next = NULL;
	return newNode;
}


void appendNode(Node** head) {
	// ���ο� ��� �����
	Node* newNode;
	newNode = createNode();
	// ���࿡ ù��°�� NULL �̶�� �ٷ� ����
	if (*head == NULL) {
		*head = newNode;
	}
	// �װ� �ƴϸ� �������� ã�Ƽ� ����
	else {
		Node* horse = *head;
		while (horse->next != NULL) {
			horse = horse->next;
		}
		horse->next = newNode;
	}
}

void deleteLastNode(Node** head) {
	Node* horse = *head;
	if (horse == NULL) {
		printf("������ ��尡 ����\n");
	}
	else if (horse->next == NULL) {
		*head = NULL;
		printf("������ %d�� �����Ǿ����ϴ�.\n", horse->data);
		free(horse);
	}
	else {
		while (horse->next->next != NULL) {
			horse = horse->next;
		}
		Node* deleteTarget = horse->next;
		printf("������ %d�� �����Ǿ����ϴ�.\n", deleteTarget->data);
		horse->next = NULL;
		free(deleteTarget);
	}
}

void printNodes(Node* head) {
	Node* horse;
	horse = head;
	while (horse->next != NULL) {
		printf("%d -> ", horse->data);
		horse = horse->next;
	}
	printf("%d\n", horse->data);
}

int main() {

	/*Node* head = createNode();
	head->next = createNode();
	head->next->next = createNode();
	head->next->next->next = createNode();*/

	//printf("%d -> %d -> %d", head->data, head->next->data, head->next->next->data);
	
	Node* head = NULL;
	while (1) {
		int num;
		printf("1. ��� �߰�\n2. ��� ����\n3. ������ ��� ����\n4. ����\n:");
		scanf("%d", &num);

		switch (num) {
		case 1:
			appendNode(&head);
			break;
		case 2:
			printNodes(head);
			break;
		case 3:
			deleteLastNode(&head);
			break;
		case 4:
			printf("���α׷� ����\n");
			return 0;
		default:
			printf("�߸� �Է���\n");
			break;
		}
		
	}

	return 0;
}