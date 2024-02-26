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
	printf("숫자 입력. ");
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
	printf("현재 스택.");
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
	printf("스택 프로그램\n");
	while (1) {
		int system;
		printf("1.스택 채우기\n2.스택 비우기\n3.전체 보기\n4.종료\n");
		printf("번호 입력.");
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
			printf("프로그램 종료.");
			return 0;
		default:
			printf("숫자 잘못 입력.\n다시 입력하세요\n");
			break;
		}
	}
}