#include"SolutionHead.h"
#include<stdlib.h>

	/*
	2     请补充DeleteX函数，在带头节点的单链表中删除给定值x（可出现多次）。
	test code:	LinkList L;
				ListInitialize(L,20);
				Ltravel(L);
				DeleteX(L, 0);
				Ltravel(L);
	*/
void DeleteX(LNode* pHead, int x)
{
	LinkList follower,leader;
	follower = leader = pHead;
	while (follower->next != NULL)
	{
		leader = follower->next;
		if (leader->data == x)
		{
			follower->next = leader->next;
			free(leader);
		}
		else
		{
			follower = leader;
		}
	}
}

	/*
	3     请借鉴快速排序算法的思想，补完Split函数将整形数组a[0...n-1]中所有的偶数移到奇数之前，要求算法原地工作且时间复杂度为O(n).
		void Split(int *a,int n) //a数组首地址，n为数组长度。
		{//add your code here}
	test code:	int A[10];
				ArrayInitialize(A, 10);
				travel(A, 10);
				Split(A, 10);
				travel(A, 10);
				ArrayEIsSOrD(A, 10);
	*/
void Split(int* a, int n)
{
	int low,high,temp;
	low = 0; high = n - 1;
	while (low < high)
	{
		while (low < high && a[high] % 2 != 0)
			high--;
		temp = a[high];
		while (low < high && a[low] % 2 != 1)
			low++;
		a[high] = a[low];
		a[low] = temp;
	}
}