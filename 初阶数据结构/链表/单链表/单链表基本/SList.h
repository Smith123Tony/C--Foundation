#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType data;//data就是我们要存储的数据
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** pphead,SLTDateType x);

void SListPustFront(SLTNode** pphead, SLTDateType x);

void SListPopBack(SLTNode** pphead);

void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDateType x);//查找



//在pos位置之前去插入一个节点
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x);//某个位置插入
//void SListInsert(SLTNode* phead, int pos, SLTDateType x);//某个位置插入

void SListInsertAfter(SLTNode* pos, SLTDateType x);

void SListErase(SLTNode** pphead, SLTNode* pos);
//void SListErase(SLTNode** phead, int pos);

void SListEraseAfter( SLTNode* pos);

void SListDestory(SLTNode** pphead);//销毁链表

