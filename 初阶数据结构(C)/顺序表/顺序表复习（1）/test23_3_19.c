#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"


//����β��
void TestSeq1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);
	
}

//��������λ�ò���
void TestSeq2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);
	printf("\n");
	ListInsert(&sl, 3, 100);
	SeqListPrint(&sl);
}

//��������λ��ɾ��
void TestSeq3()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);
	printf("\n");
	ListDelete(&sl, 3);
	SeqListPrint(&sl);
}

//����βɾ
void TestSeq4()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);
	printf("\n");
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);
}

//����ͷ��
void TestSeq5()
{

}

int main()
{
	//TestSeq1();//β��
	//TestSeq2();//����λ�ò���
	//TestSeq3();//����λ��ɾ��
	//TestSeq4();//βɾ
	TestSeq5();
	return 0;
}