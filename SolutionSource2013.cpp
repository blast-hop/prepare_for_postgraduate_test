#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include"SolutionHead.h"
#include"tool.h"

	/*
	1      һ��n��������ȫ����������ڶ�������˳��洢�ṹ�У��Ա�д�ǵݹ��㷨�Ը��������ȸ�������
	test code:
					Tpoint T=(Tpoint)malloc(sizeof(BiTree));
					T->ch = 1; T->lchild = T->rchild = NULL;
					TreeInitialize(T, 10);
					PreOrder(T);
					printf("\n2013\n");
					PreOrderUnRe(T);
	*/
void PreOrderUnRe(Tpoint T)
{
	if (T == NULL)
		return;
	StackFT S;
	BiTree temp = { NULL };
	StackInitializeBiTree(S);
	PushT(S, *T);
	while (S.top != -1)
	{
		 PopT(S, temp);
		 printf("%d ", temp.ch);
		 if(temp.rchild!=NULL)
			PushT(S, *(temp.rchild));
		 if (temp.lchild != NULL)
			PushT(S, *(temp.lchild));
	}
}

	/*
	2     ���ڽӱ����洢�ṹ���������������㷨��ʵ�֡�
	test code
					ALGraph A;
					ALGraphInitialize(A);
					ALGraphTravel(A);
					TopologySort(A);
	*/
bool TopologySort(ALGraph& A)
{
	int* ArcNum;
	ArcNum = (int*)malloc(sizeof(int) * A.vexnum);
	if (ArcNum)
	{
		memset(ArcNum, 0, sizeof(int)*A.vexnum);
		for (int i = 0; i < A.vexnum; i++)
		{
			ArcPoint temp = A.vertices[i].first;
			while (temp != NULL)
			{
				ArcNum[temp->adjvex]++;
				temp = temp->next;
			}
		}
		bool UnNull = true;
		while (UnNull==true)
		{
			UnNull = false;
			for (int i = A.vexnum-1; i >= 0; i--)
			{
				if (ArcNum[i] == 0)
				{
					ArcPoint temp = A.vertices[i].first;
					printf("%d->", A.vertices[i].data);
					while (temp != NULL)
					{
						ArcNum[temp->adjvex]--;
						temp = temp->next;
					}
					ArcNum[i]--;
					UnNull = true;
				}				
			}
		}
		printf("END");
	}
	return true;
}

	/*
	3     ����һ��ͷ�ڵ�ĵ�����L���ڵ�ṹΪdata|next���ڵ��������3�����Ի�������L�Ľṹͼ������д�㷨�жϸ�
		   ������L�е�Ԫ���Ƿ�ɵȲ��ϵ���������Ԫ��ֵ����Ϊa(1),a(2),a(3),...,a(n),�ж�a(i+1)-a(i)=a(i)-a(i-1)�Ƿ����
		   ����i����2<=i<=n-1��
	test code:
					LinkList L;
					L = (LinkList)malloc(sizeof(LNode) * 10);
					ListInitialize(L, 10);
					Ltravel(L);
					EqualDifferenceJudge(L);
	*/
bool EqualDifferenceJudge(LinkList L)
{
	LinkList leader, follower;
	leader=follower=L->next;
	int dif=0;
	if (follower->next != NULL)
	{
		dif = (follower->next->data) - (follower->data);
		while (follower->next != NULL)
		{
				leader = follower->next;
				if ((leader->data) - (follower->data) != dif)
				{
					printf("\n�ǵȲ�����\n");
					return false;
				}
				else
					follower = leader;
		}
	}
		printf("\n�ǵȲ�����\n");
		return true;
}

	/*
	4		�����Դ�ͷ�ڵ��ѭ�������ʾ���У�����ֻ��һ��ָ��ָ���βԪ�ؽڵ㣨ע�ⲻ��ͷָ�룩��
		�Ա�д��Ӧ�ĳ�ʼ�����У�����кͳ������㷨��
	test code:
					LinkQueue T;
					TeamInitialize(T);
					for (int i = 0; i < 10; i++)
					{
						EnQueue2013(T, i);
						LoopLQtravel(T);
					}
	
					for (int i = 0; i < 10; i++)
					{
						int x = 0;
						OutQueue2013(T, x);
						LoopLQtravel(T);

					}
	*/
bool TeamInitialize(LinkQueue &T)
{
	T.head.data = 0;
	T.head.next = &(T.head);
	T.rear = &(T.head);
	return true;
}

bool EnQueue2013(LinkQueue& T,int x)
{
	LinkList NewNode = (LinkList)malloc(sizeof(LNode));
	if (NewNode)
	{
		NewNode->data = x;
		NewNode->next = T.rear->next;
		T.rear->next = NewNode;
		T.rear = T.rear->next;
		return true;
	}
	else
		return false;
}

bool OutQueue2013(LinkQueue& T, int& x)
{

	if (T.head.next == &(T.head))
		return false;
	else
	{
		LinkList temp = T.head.next;
		if (temp == T.rear)
			T.rear = T.rear->next;
		T.head.next = temp->next;
		x = temp->data;
		free(temp);
		return true;
	}
}