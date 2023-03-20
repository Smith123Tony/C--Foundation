#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define N 1000
typedef int SLDataType;

////��̬˳���(�ص����������˾Ͳ��ò���)  ȱ��:�����ٺ����أ��������ȷ��
////��С�˲����ã������˾��˷���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;        //��ʾ�����д洢�˶��ٸ�����
//}SL;
//
////�ӿں���---����������STL�ߵģ��������ѧϰSTL
//void SeqListInit(SL* ps);//��ʼ��
//void SeqListPushBack(SL* ps, SLDataType x);//β��
//void SeqListPopBack(SL* ps);//βɾ
//void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
//void SeqListPopFront(SL* ps);//ͷɾ


//��̬˳���(�ص����������˾Ͳ��ò���)  ȱ��:�����ٺ����أ��������ȷ��
//��С�˲����ã������˾��˷���
typedef struct SeqList
{
	SLDataType* a;
	int size;        //��ʾ�����д洢�˶��ٸ�����
	int capacity;    //����ʵ���ܴ����ݵĿռ������Ƕ��
}SL;


//�ӿں���---����������STL�ߵģ��������ѧϰSTL
void SeqListPrint(SL* ps);//��ӡ

void SeqListInit(SL* ps);//��ʼ��
void SeqListDestory(SL* ps);//����

void SeqListCheckCapacity(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ