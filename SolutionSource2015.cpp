#include"SolutionHead.h"
#include<stdio.h>
	/*
	1     ��ʹ��C����ʵ�ּ���������߶ȵĵݹ��㷨��(��ʾ����ʹ��Max(a,b)���a,b�еĽϴ���)
		   ��������c���Զ������£�
		typedef struct tnode{
			char ch;
			struct tnode *lchild,*rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
		}BiTree;
		   int getHeight(BiTree *pRoot)
		{//add your code here}
	test code:
					Tpoint T=(Tpoint)malloc(sizeof(BiTree));
					T->ch = 1; T->lchild = T->rchild = NULL;
					TreeInitialize(T,1024);
					int height=getHeight(T);
					printf("����Ϊ��%d", height);
	*/
int getHeight(BiTree* pRoot)
{
	int left=0, right = 0;
	if (pRoot->lchild != NULL)
	{
		left=getHeight(pRoot->lchild);
	}
	if (pRoot->rchild != NULL)
	{
		right=getHeight(pRoot->rchild);
	}

	return left > right ? left+1 : right+1;
}

	/*
	2     ˳��ջ�Ķ������£���ʹ��C����ʵ����ջ�����ͳ�ջ������
		#define MAXQSIZE 100
		typedef struct{
			int rop; //ջ��ָ��
			int *base; //ջ��ָ��
			int size; //ջ�����������ʼ����sizeΪ100
		}Stack;
	test code:
					Stack S = {NULL};
					int i = 0,x=0; bool PushState = true,PopState=true;
					StackInitialize(S);
					while (PushState!=false)
						PushState=Push(S, i++);
					while (PopState != false)
					{
						StackEleTravel(S);
						PopState=Pop(S, x);
						if(PopState != false)
							printf("\n������Ԫ��%d\n", x);
						else
							printf("\nջ��\n");
					}
	*/
bool Push(Stack& S, int x)
{
	if (S.top == S.size - 1)
		return false;
	S.base[++(S.top)] = x;
	return true;
}
bool Pop(Stack& S, int& x)
{
	if (S.top == -1)
		return false;
	x = S.base[S.top--];
	return true;
}

	/*
	3     ����2017�����⣩�������������㷨��˼��,��ʹ��C����ʵ���㷨��˫�������͵�����score[0...n-1]�ֳ����飬
		   ʹ�õ�һ���Ԫ�ؾ���С��60���ڶ����Ԫ�ؾ�С��60��Ҫ���㷨ԭ�ع�����ʱ�临�Ӷ�ΪO(n)��
		void blocks(double *score,int n)  //scoreΪ�����׵�ַ��nΪ���鳤�ȡ�
	test code:
					double D[10];
					ArrayInitializeDouble(D, 10);
					travelDouble(D, 10);
					blocks2015(D, 10);
					travelDouble(D, 10);
	*/
void blocks2015(double* score, int n)
{
	int low = 0, high = n - 1;
	double temp = 0;
	while (low < high)
	{
		while (low < high && score[high] < 60)
			high--;
		while (low < high && score[low] >= 60)
			low++;
		temp = score[high];
		score[high] = score[low];
		score[low] = temp;
	}
}