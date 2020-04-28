#pragma once
#include"struct_define.h"
//predefine attribute
#define INT_MIN -2147483648
#define INT_MAX 2147483647
//predefine function
#define max(a,b) a<b?b:a
#define min(a,b) a<b?a:b
//数组
void travel(int a[], int n);
void travel2(int* a, int row, int col);
void travelDouble(double a[], int n);
void ArrayInitialize(int* A, int n);
void ArrayInitializeDouble(double* A, int n);
void ArrayEIsSOrD(int* A, int n);
//链表
bool ListInitialize(LinkList& L,int n);
void Ltravel(LinkList L);
//队列
bool SqQueueInitialize(SqQueue &S);
bool LoopLQtravel(LinkQueue &T);
//栈
bool StackInitialize(Stack& S);
void StackEleTravel(Stack& S);
bool StackInitializeBiTree(StackFT& S);
bool PopT(StackFT& S, BiTree& x);
bool PushT(StackFT& S, BiTree x);
//树
bool TreeInitialize(Tpoint& T , int n);
void PreOrder(Tpoint T);
void InOrder(Tpoint T);
void PostOrder(Tpoint T);
//图
bool ALGraphInitialize(ALGraph& A);
bool ALGraphTravel(ALGraph& A);
int PRN(ALGraph& A, int i, int j);//ALGraphInitialize专用
bool RemoveMatch(ALGraph& A, int i, int x);//ALGraphInitialize专用
//math
bool isPrime(int x); 