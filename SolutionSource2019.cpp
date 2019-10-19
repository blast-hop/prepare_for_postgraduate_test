#include<stdint.h>
#include"SolutionHead.h"
#include"struct_define.h"
	/*
	1     设顺序表va中的数据元素递增有序，试写一个算法，
    将数据元素x插入到顺序表va中的适当位置，并保持该表的有序性。

	test code:	int n = 10;
			int va[10] = { 0,10,20,40,NULL,NULL,NULL,NULL,NULL,NULL };
			InsertAndSort(va,4,-1);
			travel(va, n);
	*/
void InsertAndSort(int va[], int n, int x)
{
	int i=n-1;
	while(va[i] > x)
	{
			va[i + 1] = va[i--];
						
	}
	va[i + 1] = x;
}

	/*
	2     设计一个算法，通过一趟遍历在单链表L中查找节点数据的最大值
		  并返回
	test code:	LinkList L;
				L=ListInitialize(L);
				Ltravel(L);
				int T=MaxSearch(L);
				printf("最大值：%d", T);
	*/

int MaxSearch(LNode* node)
{
	int Max = node->data;
	while (node != NULL)
	{
		if (node->data > Max)
			Max = node->data;
		node = node->next;
	}
	return Max;
}
	/*
	3     试根据如下的二叉树结构设计一个函数，用于计算二叉树的叶子节点的个数。
		   二叉树的c语言定义如下：
		typedef struct tnode{
			char ch;
			struct tnode *lchild,*rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
		}BiTree,*Tpoint;
	test code:	Tpoint T = (Tpoint)malloc(sizeof(BiTree));
				T->ch = 1; T->lchild = NULL; T->rchild = NULL;
				TreeInitialize(T, 5);
				PreOrder(T);
				printf("\n");
				InOrder(T);
				printf("\n");
				PostOrder(T);
				printf("\n");
				int sum=Accountleaf(T);
				printf("%d", sum);
	*/
int Accountleaf(Tpoint node)
{
	int left=0, right=0;
	if (node->lchild == NULL && node->rchild == NULL)
		return 1;
	if (node->lchild != NULL)
		left=Accountleaf(node->lchild);
	if (node->rchild != NULL)
		right=Accountleaf(node->rchild);
	return left + right;
}