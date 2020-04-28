#include<stdio.h>
#include"SolutionHead.h"
#include"struct_define.h"

	/*
	1     （类2019第三题）C语言实现，设计递归算法求二叉树的节点个数。
		   二叉树的c语言定义如下：
		typedef struct tnode{
			int nData;
			struct tnode *lchild,*rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
		}BiTree;
		   int Nodes(BiTree * pRoot){//add your code here}
	test code:
					Tpoint T = (Tpoint)malloc(sizeof(BiTree));
					if (T)
					{
						T->ch = 1; T->lchild = T->rchild = NULL;
					}
					TreeInitialize(T, 100);
					PreOrder(T);
					printf("\n the sum of nodes is %d \n", Nodes(T));
	*/
int Nodes(BiTree *pRoot) 
{
	if (pRoot!=NULL)
	{
		return 1 + Nodes(pRoot->lchild) + Nodes(pRoot->rchild);
	}
	return 0;
}

	/*
	2     （类2017第三题）请借鉴快速排序算法的思想,试使用C语言实现算法将整型数组a[0...n-1]分块非递减有序，
		   第一块最大元素为A，第二块最大元素为B，其余为第三块元素，要求算法原地工作且时间复杂度为O(n)。
		void blocks(int *a,int n，int A,int B)  //a数组首地址，n为数组长度，A 第一块最大元素，B第二块最大元素。
	test code:
				
					int a[10] = { 0 };
					ArrayInitialize(a, 10);
					blocks2012(a, 10, 20, 50);
					travel(a, 10);
	*/
void blocks2012(int* a, int n, int A, int B)
{
	int low, high, pivot;
	low = 0; high = n - 1;
	pivot = a[0];
	while (low < high)
	{
		while (low < high && a[high] >= B)
			high--;
		a[low] = a[high];
		while (low < high && a[low] <= B)
			low++;
		a[high] = a[low];
	}
	a[low] = pivot;
	low = 0; 
	pivot = a[0];
	while (low < high)
	{
		while (low < high && a[high] >= A)
			high--;
		a[low] = a[high];
		while (low < high && a[low] <= A)
			low++;
		a[high] = a[low];
	}
	a[low] = pivot;
}