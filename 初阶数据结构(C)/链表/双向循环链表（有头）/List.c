#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"


//初始化
LTNode* ListInit(LTNode* phead)
{
	//哨兵位头节点
	phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
	//利用返回值的方式
}

void ListPushBack(LTNode* phead, LTDateType x)
{
	//链表为空时，依然可以处理
	assert(phead);
	//LTNode* tail = phead->prev;//找到尾节点
	//LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	//newnode->data = x;

	////phead
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	ListInsert(phead, x);
}

void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;//从phead->开始遍历链表

	while (cur != phead)//为了防止死循环，所以终止条件为cur=phead
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//尾删
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);//当链表为空时，就表示不能再删除了

	////找到尾
	//LTNode* tail = phead->prev;
	//phead->prev = tail->prev;
	//tail->prev->next = phead;

	////最后释放空间
	//free(tail);
	ListErase(phead->prev);
}

LTNode* BuyListNode(LTDateType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}

void ListPushFront(LTNode* phead, LTDateType x)
{
	assert(phead);
	//LTNode* newnode = BuyListNode(x);
	//LTNode* next = phead->next;

	//phead->next = newnode;
	//newnode->prev = phead;
	//newnode->next = next;
	//next->prev = newnode;
	ListInsert(phead->next, x);
}

//头删
void ListPopFront(LTNode* phead)
{
	assert(phead);
	////链表为空就不需要头删了
	//LTNode* next = phead->next;
	//LTNode* nextNext = next->next;

	//phead->next = nextNext;
	//nextNext->prev = phead;

	//free(next);
	ListErase(phead->next);
}

//查找
LTNode* ListFind(LTNode* phead, LTDateType x)
{
	assert(phead);
	LTNode* cur = phead->next;

	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	//没找到就返回NULL
	return NULL;
}

//pos位置之前插入
void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);

	//处理posPrev  newnode  pos三者之间的链接关系
	posPrev->next = newnode;
	newnode->prev = posPrev;

	newnode->next = pos;
	pos->prev = newnode;
}

//删除pos位置
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}

//销毁链表
void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	//想要把phead置为空，需要再函数外部进行置空，当然如果传二级指针也可以在函数内部把
	//phead置为空，不过因为我们这个双向链表都是传的一级指针，所以为了保持接口一致性，
	//我们在函数外部把phead置为空即可
}