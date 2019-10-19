#include"SolutionHead.h"
#include<stdio.h>
	/*
	1     ����2019�����⣩
			��ʹ��C����ʵ����������������㷨������������ڵ��ַ����ݵĵݹ��㷨��
		   ��������c���Զ������£�
			typedef struct tnode{
				char ch;
				struct tnode *lchild,*rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
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
	2     ѭ�����еĶ������£���ʹ��C����ʵ��ѭ�����е���Ӳ����ͳ��Ӳ�����
		#define MAXQSIZE 100
		typedef struct{
			int *base; //��ʼ���Ķ�̬����洢�ռ�
			int front; //ͷָ�룬�����в��գ�ָ�����ͷԪ�أ�
			int rear; //βָ�룬�����в��գ�ָ�����ββԪ�ص���һ��λ�ã�
		}SqQueue;
	test code:
					SqQueue S = {NULL};
					int i=0;
					SqQueueInitialize(S);
					printf("���Ԫ��Ϊ��");
					while ((S.rear + 1) % SQQUEUEMAXSIZE != S.front)
					{
						EnSqQueue(S, ++i);
						printf("%d ", S.base[S.rear - 1]);
						Sleep(5);
					}
					printf(" %d\n����Ԫ��Ϊ��",i);
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