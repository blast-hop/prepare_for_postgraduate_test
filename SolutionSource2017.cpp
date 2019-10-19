#include"SolutionHead.h"
#include<stdio.h>
	/*
	2     （类2018第二题）
	试定义单链表，设计函数在带头节点的单链表中查找给定值x出现的次数。
	test code:	LinkList L;
				ListInitialize(L,10);
				int sum = AccountX(L, 0);
				Ltravel(L);
				printf("%d", sum);
	*/
int AccountX(LinkList& L, int X)
{
	LinkList explorer=L->next; int sum=0;
	while (explorer != NULL)
	{
		
		if (explorer->data == X)
			sum++;
		explorer = explorer->next;
	}
	return sum;
}

	/*
	3     （类2018第三题）请借鉴快速排序算法的思想，实现算法将整型数组a[0...n-1]分成两块，使得第一块的元素均不小于0，第二块的元素均小于0，
		   要求算法原地工作且时间复杂度为O(n)。
		void blocks(int *a,int n)  //a数组首地址，n为数组长度。
	test code:	int A[20];
				ArrayInitialize(A, 20);
				travel(A, 20);
				blocks(A, 20);
				travel(A, 20);
	*/
void blocks(int* a, int n)
{
	int low, high,temp;
	low = 0; high = n - 1;
	while (low < high)
	{
		while (low < high && a[high] < 0)
			high--;
		while (low < high && a[low] >= 0)
			low++;
		temp = a[high];
		a[high] = a[low];
		a[low] = temp;

	}
}
