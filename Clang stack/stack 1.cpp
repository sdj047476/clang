#include<stdio.h>

typedef struct Stack {
	int top;
	int data[100];
}Stack;

void initstack(Stack* stack) {
	stack->top == -1;
}

int isEmpty(Stack* stack) {
	if (stack->top == -1) {
		return 0;
	}
	else
		return 1;

}

void push(Stack* stack) {
	int newdata;
	printf("���ڸ� �Է�.");
	scanf("%d", &newdata);
	stack->data[++stack->top] = newdata;
}

void pop(Stack* stack) {
	if (!isEmpty(stack)) {
		printf("stack is underflow\n");
	}
	else {
		stack->data[stack->top--];
	}
}

void printStack(Stack* stack) {
	for (int i = 0; i <= stack->top; i++) {
		printf(" %d ", stack->data[i]);
	}
}


int main() {

	Stack a;
	initstack(&a);
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
			printf("���� �߸� �Է�.");
			break;
		}
	}
}