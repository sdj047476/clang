// node 5�� �����
// node 1 -> ... -> 5 �����ϰ�
// node *target ����� ��ȸ�ϸ鼭 ��� ����� ������ ���

#include<stdio.h>
#include<stdlib.h>


// node ����ü �����
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