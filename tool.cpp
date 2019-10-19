#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"struct_define.h"

//����
void travel(int a[], int n) //�������
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void ArrayInitialize(int *A, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 2*pow(-1,i);
	}
}

void ArrayEIsSOrD(int* A,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			printf("Ԫ��%d��ż��\n",i+1);
		}
		else
			printf("Ԫ��%d������\n", i+1);
	}
}

//����
void Ltravel(LinkList L) //���������
{
	LinkList reader=L->next;
	while (reader != NULL)
	{
		printf("%d ", reader->data);
		reader = reader->next;
	}
	printf("\n");
}

void  ListInitialize(LinkList& L,int n) //�������ʼ��
{
	LNode* s; int x=1;
	L = (LinkList)malloc(sizeof(LNode));
	L->data = 0; L->next = NULL;
	while (x <= n)
	{
		s= (LinkList)malloc(sizeof(LNode));
		s->data = (int)log2(x);
		s->next = L->next;
		L->next = s;
		x++;
	}
}

//����
bool SqQueueInitialize(SqQueue &S)
{
	S.front = S.rear = 0;
	S.base = (int*)malloc(sizeof(int) * SQQUEUEMAXSIZE);
	if (S.base!=NULL)
		return true;
	else
		return false;
}

//��
void TreeInitialize(Tpoint& T, int n) //�����ڵ㣬�ڵ����
{
	
	int layer=((int)log2(T->ch))+1;
	if (layer <= (int)sqrt(n))
	{
		if (T->lchild == NULL && (T->ch) * 2 <= n)
		{
			T->lchild = (Tpoint)malloc(sizeof(BiTree));
			T->lchild->ch = (T->ch) * 2; T->lchild->data = 'a';
			T->lchild->lchild = NULL; T->lchild->rchild = NULL;
			TreeInitialize(T->lchild, n);		
		}
		if (T->rchild == NULL && ((T->ch) * 2) + 1 <= n)
		{
			T->rchild = (Tpoint)malloc(sizeof(BiTree));
			T->rchild->ch = ((T->ch) * 2)+1; T->rchild->data = 'b';
			T->rchild->lchild = NULL; T->rchild->rchild = NULL;
			TreeInitialize(T->rchild, n);
		}
	}
}

void PreOrder(Tpoint T)
{
	if (T != NULL)
	{
		printf("%d ", T->ch);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

void InOrder(Tpoint T)
{
	if (T != NULL)
	{
		InOrder(T->lchild);
		printf("%d ", T->ch);
		InOrder(T->rchild);
	}
}

void PostOrder(Tpoint T)
{
	if (T != NULL)
	{
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		printf("%d ", T->ch);
	}
}