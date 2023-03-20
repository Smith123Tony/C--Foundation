#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h.>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{ 
	SLDataType* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* ps);

void SeqListPrint(SL* ps);

void SeqListPushBack(SL* ps,SLDataType x);

void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, SLDataType x);

void SeqListPopFront(SL* ps);

void SeqListCheckCapacity(SL* ps);

void ListInsert(SL* ps, int i, SLDataType x);//��i��λ�ò���

void ListDelete(SL* ps, int i);//��i��λ��ɾ��

void SeqListCheckCapacity(SL* ps);