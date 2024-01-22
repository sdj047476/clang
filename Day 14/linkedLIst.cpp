//linkedList - 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

void printNodes(Node* head) {
	while (head->next != NULL) {
		printf("%d -> ", head->data);
		head = head->next;
	}
	printf("%d", head->data);
}

Node* createNode(int n) {
	Node* newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = n;
	newNode->next = NULL;
	return newNode;
}

int main() {

	/*Node first;
	first.data = 1;

	Node second;
	second.data = 2;

	Node third;
	third.data = 3;

	Node fourth;
	fourth.data = 4;

	first.next = &second;
	second.next = &third;
	third.next = &fourth;
	fourth.next = NULL;

	Node* head;
	head = &first;*/

	/*printf("%d -> ", head->data);
	head = head->next;
	printf("%d -> ", head->data);
	head = head->next;
	printf("%d -> ", head->data);
	head = head->next;
	printf("%d", head->data);*/

	///////////////////////////////////////////////////////////////

	/*while (head->next != NULL) {
		printf("%d -> ", head->data);
		head = head->next;
	}
	printf("%d", head->data);*/

	///////////////////////////////////////////////////////////////

	/*printNodes(&first);*/

	///////////////////////////////////////////////////////////////

	Node* head;
	head = createNode(10);
	head->next = createNode(20);
	head->next->next = createNode(30);
	printNodes(head);

	return 0;
}