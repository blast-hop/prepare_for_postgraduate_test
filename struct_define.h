#pragma once
//���Խṹ
	//������
typedef struct LinkNode {
	int data;
	struct LinkNode* next;
}LNode,*LinkList;
	//����
#define SQQUEUEMAXSIZE 100
typedef struct {
	int* base; //��ʼ���Ķ�̬����洢�ռ�
	int front; //ͷָ�룬�����в��գ�ָ�����ͷԪ�أ�
	int rear; //βָ�룬�����в��գ�ָ�����ββԪ�ص���һ��λ�ã�
}SqQueue;


//��״�ṹ
typedef struct tnode {
	int ch;
	char data;
	struct tnode* lchild, * rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
}BiTree,*Tpoint;