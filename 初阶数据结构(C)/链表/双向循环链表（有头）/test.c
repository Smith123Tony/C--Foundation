#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void TestList1()
{
	LTNode* plist = NULL;//≥ı ºªØ
	plist = ListInit(plist);
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPrint(plist);
}

void TestList2()
{
	LTNode* plist = NULL;
	plist = ListInit(plist);

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPrint(plist);

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);

	LTNode* pos = ListFind(plist, 2);
	if (pos != NULL)
	{
		ListErase(pos);
	}
	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

	ListDestroy(plist);
	plist = NULL;
}

int main()
{
	//TestList1();
	TestList2();
	return 0;
}