#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define N 1000
typedef int SLDataType;

////静态顺序表(特点就是如果满了就不让插入)  缺点:给多少合适呢？这个很难确定
////给小了不够用，给多了就浪费了
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;        //表示数组中存储了多少个数据
//}SL;
//
////接口函数---命名风格跟着STL走的，方便后期学习STL
//void SeqListInit(SL* ps);//初始化
//void SeqListPushBack(SL* ps, SLDataType x);//尾插
//void SeqListPopBack(SL* ps);//尾删
//void SeqListPushFront(SL* ps, SLDataType x);//头插
//void SeqListPopFront(SL* ps);//头删


//动态顺序表(特点就是如果满了就不让插入)  缺点:给多少合适呢？这个很难确定
//给小了不够用，给多了就浪费了
typedef struct SeqList
{
	SLDataType* a;
	int size;        //表示数组中存储了多少个数据
	int capacity;    //数组实际能存数据的空间容量是多大
}SL;


//接口函数---命名风格跟着STL走的，方便后期学习STL
void SeqListPrint(SL* ps);//打印

void SeqListInit(SL* ps);//初始化
void SeqListDestory(SL* ps);//销毁

void SeqListCheckCapacity(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPushFront(SL* ps, SLDataType x);//头插
void SeqListPopFront(SL* ps);//头删