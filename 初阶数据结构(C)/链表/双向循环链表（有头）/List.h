#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDateType;

typedef struct ListNode
{
	LTDateType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;


LTNode* ListInit(LTNode* phead);//��ʼ��
void ListPrint(LTNode* phead);  //��ӡ����

//β��
void ListPushBack(LTNode* phead, LTDateType x);

//βɾ
void ListPopBack(LTNode* phead);

//ͷ��
void ListPushFront(LTNode* phead, LTDateType x);

//ͷɾ
void ListPopFront(LTNode* phead);

//�����½ڵ�
LTNode* BuyListNode(LTDateType x);

//����
LTNode* ListFind(LTNode* phead, LTDateType x);

//posλ��֮ǰ����
void ListInsert(LTNode* pos, LTDateType x);

//ɾ��posλ��
void ListErase(LTNode* pos);

//�����ı�
void ListDestroy(LTNode* phead);