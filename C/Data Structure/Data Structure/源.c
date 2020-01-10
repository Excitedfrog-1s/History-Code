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
	if (t == NULL || q == NULL) return; // �ձ�ͽ���һ�����������õ���
	while (q) {
		t->next = p; // ���ý��
		p = t;       // pָ���µ��õĽ��
		t = q;       // ǰ��һ�����
		q = q->next;
	}
	t->next = p;     // �������һ�����
	head->next = t;  // headָ���ú������
}

void ShowNode(NODE head) {
	NODE p = head->next;
	for (; p; p = p->next) printf("%d ", p->m);
	printf("\n");
}

NODE CreatNode(int n) { // ������ͷ���ĵ�������
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