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


LTNode* ListInit(LTNode* phead);//初始化
void ListPrint(LTNode* phead);  //打印链表

//尾插
void ListPushBack(LTNode* phead, LTDateType x);

//尾删
void ListPopBack(LTNode* phead);

//头插
void ListPushFront(LTNode* phead, LTDateType x);

//头删
void ListPopFront(LTNode* phead);

//创建新节点
LTNode* BuyListNode(LTDateType x);

//查找
LTNode* ListFind(LTNode* phead, LTDateType x);

//pos位置之前插入
void ListInsert(LTNode* pos, LTDateType x);

//删除pos位置
void ListErase(LTNode* pos);

//销毁聊表
void ListDestroy(LTNode* phead);