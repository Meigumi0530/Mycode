#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int date;
	struct Node* next;
}node, * Linklist;
Linklist CreateH(Linklist& L, int n)
{
	printf("头插法\n");
	L->next = NULL;
	node* newnode;
	while (n)
	{
		newnode = (node*)malloc(sizeof(node));
		printf("输入新建节点的数据：\n");
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
	printf("尾插法");
	Q->next = NULL;
	node* tail = Q;
	node* newnode;
	while (n)
	{
		newnode = (node*)malloc(sizeof(node));
		printf("输入新建节点的数据：\n");
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
	printf("输入新增节点数值：\n");
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
	printf("请输入要创建节点的个数\n");
	scanf_s("%d", &n);
	Linklist L = (Linklist)malloc(sizeof(node));
	CreateH(L, n);
	Linklist Q = (Linklist)malloc(sizeof(node));
	printLinklist(L, n);
	printf("请输入要创建节点的个数\n");
	scanf_s("%d", &n);
	CreateE(Q, n);
	printLinklist(Q, n);
	printf("输入要插入节点的位置\n");
	scanf_s("%d", &x);
	addNode(Q, x);
	printLinklist(Q, n);
	printf("输入要删除节点的位置\n");
	scanf_s("%d", &z);
	deleteNode(Q, z);
	printLinklist(Q, n);
	printf("输入要删除的倒数第k个节点\n");
	scanf_s("%d", &k);
	lastDeleteNode(Q, k);
	printLinklist(Q, n);
}