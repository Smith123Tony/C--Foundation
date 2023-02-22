#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);

	

	SListPustFront(&plist, 1);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 3);
	SListPustFront(&plist, 4);

	SListPrint(plist);

}

void TestSList2()
{
	SLTNode* plist = NULL;
	
	SListPustFront(&plist, 1);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 3);
	SListPustFront(&plist, 4);

	SlistPopBack(&plist);

	SListPrint(plist);

}

void TestSList3()//测试头删
{
	SLTNode* plist = NULL;

	SListPustFront(&plist, 1);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 3);
	SListPustFront(&plist, 4);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);
}

void TestSList4()//测试查找
{
	SLTNode* plist = NULL;

	SListPustFront(&plist, 1);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 3);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 4);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 4);
	SListPrint(plist);

	//找
	SLTNode* pos = SListFind(plist, 2);
	int i = 1;
	while (pos)
	{
		printf("第%d个pos节点:%p->%d\n", i++, pos, pos->data);
		pos = SListFind(pos->next, 2);
	}

	//修改3->30
	pos = SListFind(plist, 3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(plist);
}

void TestSList5()//测试查找
{
	SLTNode* plist = NULL;

	SListPustFront(&plist, 1);
	SListPustFront(&plist, 2);
	SListPustFront(&plist, 3);
	SListPustFront(&plist, 4);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 3);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);

	pos = SListFind(plist, 1);
	if (pos)
	{
		SListInsert(&plist, pos, 10);
	}
	SListPrint(plist);

	pos = SListFind(plist, 4);
	if (pos)
	{
		SListInsert(&plist, pos, 40);
	}
	SListPrint(plist);

}
TestSList6()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);

	SListPrint(plist);
	SListDestory(&plist);//销毁链表

}
int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	//TestSList5();
	TestSList6();
	return 0;
}