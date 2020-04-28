#include<stdio.h>
#include"SolutionHead.h"
#include"struct_define.h"

	/*
	1     ����2019�����⣩C����ʵ�֣���Ƶݹ��㷨��������Ľڵ������
		   ��������c���Զ������£�
		typedef struct tnode{
			int nData;
			struct tnode *lchild,*rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
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
	2     ����2017�����⣩�������������㷨��˼��,��ʹ��C����ʵ���㷨����������a[0...n-1]�ֿ�ǵݼ�����
		   ��һ�����Ԫ��ΪA���ڶ������Ԫ��ΪB������Ϊ������Ԫ�أ�Ҫ���㷨ԭ�ع�����ʱ�临�Ӷ�ΪO(n)��
		void blocks(int *a,int n��int A,int B)  //a�����׵�ַ��nΪ���鳤�ȣ�A ��һ�����Ԫ�أ�B�ڶ������Ԫ�ء�
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