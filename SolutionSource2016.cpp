#include"SolutionHead.h"
#include<stdio.h>
	/*
	1     （类2019第三题）
			试使用C语言实现先序遍历二叉树算法，输出二叉树节点字符数据的递归算法。
		   二叉树的c语言定义如下：
			typedef struct tnode{
				char ch;
				struct tnode *lchild,*rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
			}BiTree;
			   int PreOrderTraverse(BiTree *pRoot)
			{//add your code here}
	test code:
					Tpoint T=(Tpoint)malloc(sizeof(BiTree));
					T->ch = 1; T->data = 'c';
					T->lchild = T->rchild = NULL;
					TreeInitialize(T, 20);
					PreOrderTraverse2016(T);
					printf("\n");
					PreOrder(T);
	*/
int PreOrderTraverse2016(BiTree* pRoot)
{
	if (pRoot != NULL)
	{
		printf("%c ", pRoot->data);
		PreOrderTraverse2016(pRoot->lchild);
		PreOrderTraverse2016(pRoot->rchild);
	}
	return 0;
}

	/*
	2     循环队列的定义如下，试使用C语言实现循环队列的入队操作和出队操作。
		#define MAXQSIZE 100
		typedef struct{
			int *base; //初始化的动态分配存储空间
			int front; //头指针，若队列不空，指向队列头元素；
			int rear; //尾指针，若队列不空，指向队列尾尾元素的下一个位置；
		}SqQueue;
	test code:
					SqQueue S = {NULL};
					int i=0;
					SqQueueInitialize(S);
					printf("入队元素为：");
					while ((S.rear + 1) % SQQUEUEMAXSIZE != S.front)
					{
						EnSqQueue(S, ++i);
						printf("%d ", S.base[S.rear - 1]);
						Sleep(5);
					}
					printf(" %d\n出队元素为：",i);
					while (S.front != S.rear)
					{
						OutSqQueue(S, i);
						printf("%d ", i);
					}
	*/
bool OutSqQueue(SqQueue &S,int &x)
{
	if (S.front == S.rear)
		return false;
	x = S.base[S.front];
	S.front = (S.front + 1) % SQQUEUEMAXSIZE;
	return true;
}

bool EnSqQueue(SqQueue &S,int x)
{
	if ((S.rear + 1) % SQQUEUEMAXSIZE == S.front)
		return false;
	S.base[S.rear] = x;
	S.rear = (S.rear + 1) % SQQUEUEMAXSIZE;
	return true;
}