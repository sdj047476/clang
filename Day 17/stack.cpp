// stack - 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// �迭 ������� ���� ����
typedef struct Stack {
	int top;
	int data[100];
}Stack;

void initStack(Stack* stack) {
	stack->top = -1;
}

int isFull(Stack* stack) {
	return stack->top == 99;
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void pop(Stack* stack) {
	if (isEmpty(stack)) {
		printf("�� �ٴ�. ����\n");
		return;
	}
	else {
		stack->top--;
		return;
	}
}

// ���� �Է¹ޱ�.top ++ �ϱ�.stack�� top��°�� ���� �Է¹����� �ֱ�
void push(Stack* stack) {
	//stack overflow - if top == 100.return
	if (isFull(stack)) {
		printf("�����Ͱ� �� á���ϴ�.");
		return;
	}
	int numData;
	printf("���� �Է�. ");
	scanf("%d", &numData);
	stack->top++;
	stack->data[stack->top] = numData;
}

void printStack(Stack* stack) {
	if (isEmpty(stack)) {
		printf("����\n");
		return;
	}
	for (int i = stack->top; i >= 0; i--) {
		if (i == stack->top) {
			printf("%d", stack->data[i]);
		}
		else {
			printf(" <- %d", stack->data[i]);
		}
	}
	printf("\n");
}


int main() {
	Stack st;
	initStack(&st);
	push(&st);
	push(&st);
	push(&st);
	printStack(&st);
	pop(&st);

	return 0;
}
