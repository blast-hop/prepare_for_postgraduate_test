#pragma once
//���Խṹ
	//������
	typedef struct LinkNode {
		int data;
		struct LinkNode* next;
	}LNode,*LinkList;
	//˳�����
	#define SQQUEUEMAXSIZE 100
	typedef struct {
		int* base; //��ʼ���Ķ�̬����洢�ռ�
		int front; //ͷָ�룬�����в��գ�ָ�����ͷԪ�أ�
		int rear; //βָ�룬�����в��գ�ָ�����ββԪ�ص���һ��λ�ã�
	}SqQueue;
	//��ʽ����
	typedef struct {
		LNode head;
		LinkList rear;//ֻ��βָ��
	}LinkQueue;
	//˳��ջ
	#define STACKMAXQSIZE 100
	typedef struct {
		int top; //ջ��ָ��
		int* base; //ջ��ָ��
		int size; //ջ�����������ʼ����sizeΪ100
	}Stack;

//��״�ṹ
	typedef struct tnode {
		int ch;
		char data;
		struct tnode* lchild, * rchild; //lchild,rchild�ֱ�ָ��ǰ�ڵ����Ӻ��Һ���
	}BiTree,*Tpoint;

	//Stack for tree
	typedef struct {
		int top; //ջ��ָ��
		Tpoint base; //ջ��ָ��
		int size; //ջ�����������ʼ����sizeΪ100
	}StackFT;

//ͼ
	//�ڽӱ�
	#define MAXVERTEXNUM 100
		//�߱�
		typedef struct ArcNode {
			int adjvex;
			ArcNode* next;
			//int info;
		}ArcNode,*ArcPoint;
		//�����
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