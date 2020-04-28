#pragma once
#include"struct_define.h"
//2019
void InsertAndSort(int va[], int n, int x);
int MaxSearch(LNode* node);
int Accountleaf(Tpoint node);
//2018
void DeleteX(LNode* pHead, int x);
void Split(int* a, int n);
//2017
int AccountX(LinkList L, int X);
void blocks2017(int* a, int n);
//2016
int PreOrderTraverse2016(BiTree* pRoot);
bool EnSqQueue(SqQueue &S, int x);
bool OutSqQueue(SqQueue &S,int &x);
//2015
int getHeight(BiTree* pRoot);
bool Pop(Stack& S, int& x);
bool Push(Stack& S, int x);
void blocks2015(double* score, int n);
//2013
void PreOrderUnRe(Tpoint T);
bool TopologySort(ALGraph& A);
bool EqualDifferenceJudge(LinkList L);
bool TeamInitialize(LinkQueue& T);
bool EnQueue2013(LinkQueue& T, int x);
bool OutQueue2013(LinkQueue& T, int& x);
//2012
int Nodes(BiTree* pRoot);
void blocks2012(int* a, int n, int A, int B);