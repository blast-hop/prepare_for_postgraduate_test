#pragma once
//线性结构
	//单链表
	typedef struct LinkNode {
		int data;
		struct LinkNode* next;
	}LNode,*LinkList;
	//顺序队列
	#define SQQUEUEMAXSIZE 100
	typedef struct {
		int* base; //初始化的动态分配存储空间
		int front; //头指针，若队列不空，指向队列头元素；
		int rear; //尾指针，若队列不空，指向队列尾尾元素的下一个位置；
	}SqQueue;
	//链式队列
	typedef struct {
		LNode head;
		LinkList rear;//只有尾指针
	}LinkQueue;
	//顺序栈
	#define STACKMAXQSIZE 100
	typedef struct {
		int top; //栈顶指针
		int* base; //栈底指针
		int size; //栈的容量，设初始化后size为100
	}Stack;

//树状结构
	typedef struct tnode {
		int ch;
		char data;
		struct tnode* lchild, * rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
	}BiTree,*Tpoint;

	//Stack for tree
	typedef struct {
		int top; //栈顶指针
		Tpoint base; //栈底指针
		int size; //栈的容量，设初始化后size为100
	}StackFT;

//图
	//邻接表
	#define MAXVERTEXNUM 100
		//边表
		typedef struct ArcNode {
			int adjvex;
			ArcNode* next;
			//int info;
		}ArcNode,*ArcPoint;
		//顶点表
		typedef struct VNode {
			int data;
			ArcNode* first;
			int LinkState;
		}VNode, AdjList[MAXVERTEXNUM];
	typedef struct {
		AdjList vertices;
		int vexnum, vexsize, arcnum;
	}ALGraph;

	//for interview

//student(id,score)
typedef struct {
	long long id;
	int score;
}student;

typedef struct {
	long long id;
	float score1;
	float score2;
	float score3;
	float score4;
	float score5;
	float score6;
	float score7;
	float score8;
	float ave;
}student8s;