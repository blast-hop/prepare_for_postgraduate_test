#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include"SolutionHead.h"
#include"tool.h"

	/*
	1      一颗n个结点的完全二叉树存放在二叉树的顺序存储结构中，试编写非递归算法对该树进行先根遍历。
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
	2     以邻接表作存储结构，给出拓扑排序算法的实现。
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
	3     设有一带头节点的单链表L，节点结构为data|next，节点个数至少3个，试画出链表L的结构图，并编写算法判断该
		   单链表L中的元素是否成等差关系，即：设各元素值依次为a(1),a(2),a(3),...,a(n),判断a(i+1)-a(i)=a(i)-a(i-1)是否成立
		   其中i满足2<=i<=n-1。
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
					printf("\n非等差数列\n");
					return false;
				}
				else
					follower = leader;
		}
	}
		printf("\n是等差数列\n");
		return true;
}

	/*
	4		假设以带头节点的循环链表表示队列，并且只设一个指针指向队尾元素节点（注意不设头指针），
		试编写相应的初始化队列，入队列和出队列算法。
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