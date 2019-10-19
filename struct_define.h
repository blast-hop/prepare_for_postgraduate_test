#pragma once
//线性结构
	//单链表
typedef struct LinkNode {
	int data;
	struct LinkNode* next;
}LNode,*LinkList;
	//队列
#define SQQUEUEMAXSIZE 100
typedef struct {
	int* base; //初始化的动态分配存储空间
	int front; //头指针，若队列不空，指向队列头元素；
	int rear; //尾指针，若队列不空，指向队列尾尾元素的下一个位置；
}SqQueue;


//树状结构
typedef struct tnode {
	int ch;
	char data;
	struct tnode* lchild, * rchild; //lchild,rchild分别指向当前节点左孩子和右孩子
}BiTree,*Tpoint;