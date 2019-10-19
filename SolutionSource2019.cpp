#include<stdint.h>
#include"SolutionHead.h"
#include"struct_define.h"
	/*
	1     ��˳���va�е�����Ԫ�ص���������дһ���㷨��
    ������Ԫ��x���뵽˳���va�е��ʵ�λ�ã������ָñ�������ԡ�

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
	2     ���һ���㷨��ͨ��һ�˱����ڵ�����L�в��ҽڵ����ݵ����ֵ
		  ������
	test code:	LinkList L;
				L=ListInitialize(L);
				Ltravel(L);
				int T=MaxSearch(L);
				printf("���ֵ��%d", T);
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
	3     �Ը������µĶ������ṹ���һ�����������ڼ����������Ҷ�ӽڵ�ĸ�����
		   ��������c���Զ������£�
		typedef struct tnode{
			char ch;
			struct tnode *lchild,*rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
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