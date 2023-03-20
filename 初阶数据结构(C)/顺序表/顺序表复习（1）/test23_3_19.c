#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"


//≤‚ ‘Œ≤≤Â
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

//≤‚ ‘»Œ“‚Œª÷√≤Â»Î
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

//≤‚ ‘»Œ“‚Œª÷√…æ≥˝
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

//≤‚ ‘Œ≤…æ
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

//≤‚ ‘Õ∑≤Â
void TestSeq5()
{

}

int main()
{
	//TestSeq1();//Œ≤≤Â
	//TestSeq2();//»Œ“‚Œª÷√≤Â»Î
	//TestSeq3();//»Œ“‚Œª÷√…æ≥˝
	//TestSeq4();//Œ≤…æ
	TestSeq5();
	return 0;
}