#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Stack {
	int top;
	int data[100];
}Stack;

void stackInit(Stack* stack) {
	stack->top = -1;
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void push(Stack* stack) {
	int num;
	printf("���� �Է�. ");
	scanf("%d", &num);
	stack->data[++stack->top] = num;
}

void pop(Stack* stack) {
	if (isEmpty(stack)) {
		printf("stack is underflow\n");
	}
	else {
		stack->data[stack->top--];
	}
}

void printStack(Stack* stack) {
	printf("���� ����.");
	for (int i = 0; i <= stack->top; i++) {
		printf(" %d ", stack->data[i]);
	}
	printf("\n");
}

int main() {
	Stack a;
	stackInit(&a);
	/*push(&a);
	push(&a);
	push(&a);
	printStack(&a);
	pop(&a);
	printStack(&a);*/
	printf("���� ���α׷�\n");
	while (1) {
		int system;
		printf("1.���� ä���\n2.���� ����\n3.��ü ����\n4.����\n");
		printf("��ȣ �Է�.");
		scanf("%d", &system);
		
		switch (system) {
		case 1:
			push(&a);
			break;
		case 2:
			pop(&a);
			break;
		case 3:
			printStack(&a);
			break;
		case 4:
			printf("���α׷� ����.");
			return 0;
		default:
			printf("���� �߸� �Է�.\n�ٽ� �Է��ϼ���\n");
			break;
		}
	}
}