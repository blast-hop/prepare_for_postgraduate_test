#include"SolutionHead.h"
#include<stdlib.h>

	/*
	2     �벹��DeleteX�������ڴ�ͷ�ڵ�ĵ�������ɾ������ֵx���ɳ��ֶ�Σ���
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
	3     �������������㷨��˼�룬����Split��������������a[0...n-1]�����е�ż���Ƶ�����֮ǰ��Ҫ���㷨ԭ�ع�����ʱ�临�Ӷ�ΪO(n).
		void Split(int *a,int n) //a�����׵�ַ��nΪ���鳤�ȡ�
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