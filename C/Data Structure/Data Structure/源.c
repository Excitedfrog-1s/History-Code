#include <stdio.h>
#include <stdlib.h>

#define ELTYPE int

typedef struct node {
	ELTYPE m;
	struct node *next;
} *NODE;

void InversionNode(NODE head) {
	NODE p, t, q;
	p = NULL;
	t = head->next;
	q = t->next;
	if (t == NULL || q == NULL) return; // 空表和仅有一个结点的链表不用倒置
	while (q) {
		t->next = p; // 倒置结点
		p = t;       // p指向新倒置的结点
		t = q;       // 前进一个结点
		q = q->next;
	}
	t->next = p;     // 处理最后一个结点
	head->next = t;  // head指向倒置后的链表
}

void ShowNode(NODE head) {
	NODE p = head->next;
	for (; p; p = p->next) printf("%d ", p->m);
	printf("\n");
}

NODE CreatNode(int n) { // 创建有头结点的单向链表
	int i;
	NODE head, p, q;
	head = p = (NODE)malloc(sizeof(node));
	for (i = 0; i < n; ++i) {
		q = (NODE)malloc(sizeof(node));
		q->m = 2 * i;
		p->next = q;
		p = q;
	}
	p->next = NULL;
	return head;
}

int main() {
	NODE head = CreatNode(5);
	ShowNode(head);
	InversionNode(head);
	ShowNode(head);
	return 0;
}