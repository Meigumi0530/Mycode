#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int date;
	struct Node* next;
}node, * Linklist;
Linklist CreateH(Linklist& L, int n)
{
	printf("ͷ�巨\n");
	L->next = NULL;
	node* newnode;
	while (n)
	{
		newnode = (node*)malloc(sizeof(node));
		printf("�����½��ڵ�����ݣ�\n");
		scanf_s("%d", &newnode->date);
		newnode->next = L->next;
		L->next = newnode;
		n--;
	}
	printf("\n");
	return L;
}
Linklist printLinklist(Linklist& L, int n)
{
	node* p = L->next;
	while (p)
	{
		printf("%d ", p->date);
		p = p->next;
	}
	printf("\n");
	return p;
}
Linklist CreateE(Linklist& Q, int n)
{
	printf("β�巨");
	Q->next = NULL;
	node* tail = Q;
	node* newnode;
	while (n)
	{
		newnode = (node*)malloc(sizeof(node));
		printf("�����½��ڵ�����ݣ�\n");
		scanf_s("%d", &newnode->date);
		tail->next = newnode;
		tail = tail->next;
		n--;
	}
	tail->next = NULL;
	return tail;
}
Linklist addNode(Linklist& Q, int x)
{
	node* p = Q->next;
	int count = 1;
	while (count < x - 1 && p)
	{
		p = p->next;
		count++;
	}
	node* newnode = (Linklist)malloc(sizeof(node));
	printf("���������ڵ���ֵ��\n");
	scanf_s("%d", &newnode->date);
	newnode->next = p->next;
	p->next = newnode;
	return p;
}
Linklist deleteNode(Linklist& Q, int z)
{
	node* p = Q->next;
	int count = 1;
	while (count < z - 1 && p)
	{
		p = p->next;
		count++;
	}
	node* q = p->next;
	p->next = q->next;
	free(q);
	return q;
}
Linklist lastDeleteNode(Linklist& Q, int k)
{
	int count = 1;
	node* p = Q->next;
	while (p)
	{
		p = p->next;
		count++;
	}
	k = count + 1 - k;
	count = 1;
	p = Q->next;
	while (p && count < k - 1)
	{
		p = p->next;
	}
	node* q = p->next;
	p->next = q->next;
	free(q);
	return q;
}
int main()
{
	int n, x, z, k;
	printf("������Ҫ�����ڵ�ĸ���\n");
	scanf_s("%d", &n);
	Linklist L = (Linklist)malloc(sizeof(node));
	CreateH(L, n);
	Linklist Q = (Linklist)malloc(sizeof(node));
	printLinklist(L, n);
	printf("������Ҫ�����ڵ�ĸ���\n");
	scanf_s("%d", &n);
	CreateE(Q, n);
	printLinklist(Q, n);
	printf("����Ҫ����ڵ��λ��\n");
	scanf_s("%d", &x);
	addNode(Q, x);
	printLinklist(Q, n);
	printf("����Ҫɾ���ڵ��λ��\n");
	scanf_s("%d", &z);
	deleteNode(Q, z);
	printLinklist(Q, n);
	printf("����Ҫɾ���ĵ�����k���ڵ�\n");
	scanf_s("%d", &k);
	lastDeleteNode(Q, k);
	printLinklist(Q, n);
}