// node 5개 만들기
// node 1 -> ... -> 5 연결하고
// node *target 만들고 순회하면서 모든 연결된 데이터 출력

#include<stdio.h>
#include<stdlib.h>


// node 구조체 만들고
typedef struct Node {
	int data;
	struct Node* next;
}Node;

int main() {

	Node a, b, c, d, e;
	a.data = 1;
	a.next = &b;
	b.data = 2;
	b.next = &c;
	c.data = 3;
	c.next = &d;
	d.data = 4;
	d.next = &e;
	e.data = 5;
	e.next = NULL;

	Node* target;
	target = &a;
	while (target != NULL) {
		printf("%d", target->data);
		target = target->next;
	}

	return 0;
}