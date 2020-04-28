#pragma once
#include"struct_define.h"
//predefine attribute
#define INT_MIN -2147483648
#define INT_MAX 2147483647
//predefine function
#define max(a,b) a<b?b:a
#define min(a,b) a<b?a:b
//����
void travel(int a[], int n);
void travel2(int* a, int row, int col);
void travelDouble(double a[], int n);
void ArrayInitialize(int* A, int n);
void ArrayInitializeDouble(double* A, int n);
void ArrayEIsSOrD(int* A, int n);
//����
bool ListInitialize(LinkList& L,int n);
void Ltravel(LinkList L);
//����
bool SqQueueInitialize(SqQueue &S);
bool LoopLQtravel(LinkQueue &T);
//ջ
bool StackInitialize(Stack& S);
void StackEleTravel(Stack& S);
bool StackInitializeBiTree(StackFT& S);
bool PopT(StackFT& S, BiTree& x);
bool PushT(StackFT& S, BiTree x);
//��
bool TreeInitialize(Tpoint& T , int n);
void PreOrder(Tpoint T);
void InOrder(Tpoint T);
void PostOrder(Tpoint T);
//ͼ
bool ALGraphInitialize(ALGraph& A);
bool ALGraphTravel(ALGraph& A);
int PRN(ALGraph& A, int i, int j);//ALGraphInitializeר��
bool RemoveMatch(ALGraph& A, int i, int x);//ALGraphInitializeר��
//math
bool isPrime(int x); 