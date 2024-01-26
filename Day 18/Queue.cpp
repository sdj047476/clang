// Queue - 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct QueueNode {
	int data;
	struct QueueNode* next;
}QueueNode;

typedef struct Queue {
	QueueNode* front;
	QueueNode* rear;
}Queue;

void initQueue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
}

QueueNode* createNode() {
	QueueNode* newNode;
	newNode = (QueueNode*)malloc(sizeof(QueueNode));
	int newData;
	printf("데이터 입력. ");
	scanf("%d", &newData);
	newNode->data = newData;
	newNode->next = NULL;
	return newNode;
}

void enqueue(Queue* q) {
	QueueNode* newNode = createNode();
	if (q->front == NULL) {
		q->front = newNode;
	}
	else {
		q->rear->next = newNode;
	}
	q->rear = newNode;
}

void printQueue(Queue* q) {
	if (q->front == NULL) {
		printf("큐가 비었음\n");
		return;
	}
	QueueNode* searcher = q->front;
	while (searcher->next != NULL) {
		printf("%d -> ", searcher->data);
		searcher = searcher->next;
	}
	printf("%d", searcher->data);
	printf("\n");
}

void dequeue(Queue* q) {
	if (q->front == NULL) {
		printf("큐가 비었음.");
		return;
	}
	QueueNode* target = q->front;
	printf("%d는 빠집니다.\n", target->data);
	q->front = target->next;
	if (q->front == NULL) {
		q->rear = NULL;
	}
	free(target);
	return;
}

int main() {
	Queue q;
	initQueue(&q);
	enqueue(&q);
	enqueue(&q);
	enqueue(&q);
	printQueue(&q);
	dequeue(&q);
	printQueue(&q);
	return 0;
}
