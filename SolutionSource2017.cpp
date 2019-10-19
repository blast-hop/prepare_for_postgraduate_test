#include"SolutionHead.h"
#include<stdio.h>
	/*
	2     ����2018�ڶ��⣩
	�Զ��嵥������ƺ����ڴ�ͷ�ڵ�ĵ������в��Ҹ���ֵx���ֵĴ�����
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
	3     ����2018�����⣩�������������㷨��˼�룬ʵ���㷨����������a[0...n-1]�ֳ����飬ʹ�õ�һ���Ԫ�ؾ���С��0���ڶ����Ԫ�ؾ�С��0��
		   Ҫ���㷨ԭ�ع�����ʱ�临�Ӷ�ΪO(n)��
		void blocks(int *a,int n)  //a�����׵�ַ��nΪ���鳤�ȡ�
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
