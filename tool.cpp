#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<memory.h>
#include"struct_define.h"
#include "tool.h"

//数组
void travel(int a[], int n) //数组遍历
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void travel2(int* a, int row, int col) {
	for (int i = 0; i < row; i++)
	{
		travel(&(a[0+col*i]), col);
	}
}

void travelDouble(double a[], int n) //数组遍历
{
	for (int i = 0; i < n; i++)
		printf("%f ", a[i]);
	printf("\n");
}

void ArrayInitialize(int *A, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] =(int)rand() % 100;
	}
}

void ArrayInitializeDouble(double* A, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = (double)(rand() % 101);
	}
}

void ArrayEIsSOrD(int* A,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			printf("元素%d是偶数\n",i+1);
		}
		else
			printf("元素%d是奇数\n", i+1);
	}
}

//链表
void Ltravel(LinkList L) //单链表遍历
{
	LinkList reader=L->next;
	while (reader != NULL)
	{
		printf("%d ", reader->data);
		reader = reader->next;
	}
	printf("\n");
}

bool  ListInitialize(LinkList& L,int n) //单链表初始化
{
	srand((unsigned)time(NULL));
	LNode* s; int x=1;
	L = (LinkList)malloc(sizeof(LNode));
	if (L) {
		L->data = 0; L->next = NULL;
		while (x <= n)
		{
			s = (LinkList)malloc(sizeof(LNode));
			if (s)
			{
				s->data = x + rand() % 2;
				s->next = L->next;
				L->next = s;
				x++;
			}
			else
				return false;
		}
		return true;
	}
	else
		return false;
}

//队列
bool SqQueueInitialize(SqQueue &S)
{
	S.front = S.rear = 0;
	S.base = (int*)malloc(sizeof(int) * SQQUEUEMAXSIZE);
	if (S.base!=NULL)
		return true;
	else
		return false;
}
bool LoopLQtravel(LinkQueue &T) //循环队列遍历
{
	if (T.head.next == &(T.head))
	{
		printf("空"); 
		return false;
	}
	LinkList reader = T.head.next;
	while (reader != T.rear->next)
	{
		printf("%d ", reader->data);
		reader = reader->next;
	}
	printf("\n");
	return true;
}
//栈
bool StackInitialize(Stack& S)
{
	S.top = -1;
	S.base = (int*)malloc(sizeof(int) * STACKMAXQSIZE);
	if (S.base != NULL)
	{
		S.size = STACKMAXQSIZE;
		return true;
	}
	else
		return false;
}

//Stack for tree
bool StackInitializeBiTree(StackFT& S)
{
	S.top = -1;
	S.base = (Tpoint)malloc(sizeof(BiTree) * STACKMAXQSIZE);
	if (S.base != NULL)
	{
		S.size = STACKMAXQSIZE;
		return true;
	}
	else
		return false;
}

void StackEleTravel(Stack& S)
{
	int i = S.top;
	while (i >-1)
		printf("%d ", S.base[i--]);
}

bool PushT(StackFT& S, BiTree x)
{
	if (S.top == S.size - 1)
		return false;
	S.base[++(S.top)] = x;
	return true;
}
bool PopT(StackFT& S, BiTree& x)
{
	if (S.top == -1)
		return false;
	x = S.base[S.top--];
	return true;
}

//树
bool TreeInitialize(Tpoint& T, int n) //树根节点，节点个数
{
	
	int layer=((int)log2(T->ch))+1;
	if (layer <= (int)ceil(sqrt(n)))
	{
		if (T->lchild == NULL && (T->ch) * 2 <= n)
		{
			T->lchild = (Tpoint)malloc(sizeof(BiTree));
			if (T->lchild)
			{
				T->lchild->ch = (T->ch) * 2; T->lchild->data = 'a';
				T->lchild->lchild = NULL; T->lchild->rchild = NULL;
				TreeInitialize(T->lchild, n);
			}
			else
				return false;			
		}
		if (T->rchild == NULL && ((T->ch) * 2) + 1 <= n)
		{
			T->rchild = (Tpoint)malloc(sizeof(BiTree));
			if (T->rchild)
			{
				T->rchild->ch = ((T->ch) * 2) + 1; T->rchild->data = 'b';
				T->rchild->lchild = NULL; T->rchild->rchild = NULL;
				TreeInitialize(T->rchild, n);
			}
			else
				return false;
		}
	}
	return true;
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

//图
//邻接表-有向无环图-初始化
bool RemoveMatch(ALGraph& A, int i, int x) //排除与当前A.vertices[i]已存在ArcNode->adjvex相同的数
{
	ArcPoint temp = A.vertices[i].first;
	while (temp != NULL)
	{
		if (temp->adjvex == x+i)
			return false;
		else
			temp = temp->next;
	}
	return true;
}

bool isPrime(int x)
{
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0)
			return false;
	}
	return true;
}

int PRN(ALGraph &A,int i, int j) //提供非重随机数
{
	if (i == j - 1)
		return -j;
	int x = 0;
	int cycle = 0;
	while (x == 0 || RemoveMatch(A, i, x) == false)
	{
		cycle++;
		if (cycle < 3)
			x = rand() % (j - i);
		else
			x = -(A.vexnum);
	}
		
	return x;
}
bool ALGraphInitialize(ALGraph& A)
{
	A.vexsize = MAXVERTEXNUM;
	A.arcnum = A.vexnum = 0;
	memset(A.vertices, NULL, sizeof(VNode) * 100);
	int VexNum;

	srand((unsigned)time(NULL));
	VexNum = (int)rand() % 100;
	for (int i = 0; i < VexNum; i++)
	{
		if (A.vexnum < A.vexsize)
		{
			A.vertices[i].data=i;
			A.vertices[i].first = NULL;
			A.vertices[i].LinkState = 0;
			A.vexnum++;
		}
		else
		{
			break;
		}		
	}
	for (int i = A.vexnum; i < A.vexsize; i++)
	{
		if (A.vexnum < A.vexsize)
		{
			A.vertices[i].data = 0;
			A.vertices[i].first = NULL;
			A.vertices[i].LinkState = 0;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < VexNum; i++)
	{
		A.vertices[i].first = (ArcPoint)malloc(sizeof(ArcNode));
		if (A.vertices[i].first)
		{
			memset(A.vertices[i].first, NULL, sizeof(ArcNode));
			if (i < A.vexnum - 1)
			{
				A.vertices[i].first->adjvex = i + PRN(A, i, A.vexnum);
				A.vertices[A.vertices[i].first->adjvex].LinkState++;
				A.arcnum++;
				if (i % 2 == 0)
				{
					A.vertices[i].first->next = (ArcPoint)malloc(sizeof(ArcNode));
					if (A.vertices[i].first->next)
					{
						memset(A.vertices[i].first->next, NULL, sizeof(ArcNode));
						srand((unsigned)time(NULL));
						A.vertices[i].first->next->adjvex = i + PRN(A, i, A.vexnum);
						A.vertices[A.vertices[i].first->next->adjvex].LinkState++;
						A.arcnum++;
					}

				}
			}
			else
			{
				if (A.vertices[i].first)
					A.vertices[i].first->adjvex = -1;
				A.vertices[i].first->next = NULL;
			}
		}
	}
	return true;
}

bool ALGraphTravel(ALGraph& A)
{

	for (int i = 0; i < A.vexnum; i++)
	{
		ArcPoint temp;
		printf("节点<%d>", A.vertices[i].data);
		temp = A.vertices[i].first;
		while (temp != NULL)
		{
			if(temp->adjvex == A.vexnum - 1)
				printf("->尾节点");
			else
			{
				printf("->%d", temp->adjvex);
			}
			temp = temp->next;
		}		
		printf("  有%d条入边\n",A.vertices[i].LinkState);
	}
	return true;
}