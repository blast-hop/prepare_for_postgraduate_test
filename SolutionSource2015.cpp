#include"SolutionHead.h"
#include<stdio.h>
	/*
	1     试使用C语言实现计算二叉树高度的递归算法。(提示：可使用Max(a,b)求得a,b中的较大者)
		   二叉树的c语言定义如下：
		typedef struct tnode{
			char ch;
			struct tnode *lchild,*rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
		}BiTree;
		   int getHeight(BiTree *pRoot)
		{//add your code here}
	test code:
					Tpoint T=(Tpoint)malloc(sizeof(BiTree));
					T->ch = 1; T->lchild = T->rchild = NULL;
					TreeInitialize(T,1024);
					int height=getHeight(T);
					printf("树高为：%d", height);
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
	2     顺序栈的定义如下，试使用C语言实现入栈操作和出栈操作。
		#define MAXQSIZE 100
		typedef struct{
			int rop; //栈顶指针
			int *base; //栈底指针
			int size; //栈的容量，设初始化后size为100
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
							printf("\n弹出了元素%d\n", x);
						else
							printf("\n栈空\n");
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
	3     （类2017第三题）请借鉴快速排序算法的思想,试使用C语言实现算法将双精度类型的数组score[0...n-1]分成两块，
		   使得第一块的元素均不小于60，第二块的元素均小于60，要求算法原地工作且时间复杂度为O(n)。
		void blocks(double *score,int n)  //score为数组首地址，n为数组长度。
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