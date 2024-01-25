// stack - 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 배열 기반으로 스택 구현
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
		printf("맨 바닥. 오류\n");
		return;
	}
	else {
		stack->top--;
		return;
	}
}

// 정수 입력받기.top ++ 하기.stack의 top번째에 정수 입력받은거 넣기
void push(Stack* stack) {
	//stack overflow - if top == 100.return
	if (isFull(stack)) {
		printf("데이터가 다 찼습니다.");
		return;
	}
	int numData;
	printf("정수 입력. ");
	scanf("%d", &numData);
	stack->top++;
	stack->data[stack->top] = numData;
}

void printStack(Stack* stack) {
	if (isEmpty(stack)) {
		printf("없음\n");
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
