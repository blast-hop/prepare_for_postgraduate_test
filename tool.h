#pragma once
//数组
void travel(int a[], int n);
void ArrayInitialize(int* A, int n);
void ArrayEIsSOrD(int* A, int n);
//链表
void ListInitialize(LinkList& L,int n);
void Ltravel(LinkList L);
//队列
bool SqQueueInitialize(SqQueue &S);
//树
void TreeInitialize(Tpoint& T , int n);
void PreOrder(Tpoint T);
void InOrder(Tpoint T);
void PostOrder(Tpoint T);