#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

SLTNode* BuyListNode(SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	//检查是否开辟成功
	if (newnode == NULL)
	{
		printf("malloc fail\n");//内存申请失败的话说明已经没有多少空间了
		exit(-1);//申请失败则直接结束程序
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//尾插
void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);

	//起初链表中是啥也没有的
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找到尾部=节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//头插
void SListPustFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SlistPopBack(SLTNode** pphead)
{
	//温柔一点
	if (*pphead == NULL)
	{
		return;
	}

	//粗暴一点
	//assert(*pphead != NULL);

	//走到这里意味着一定有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = *pphead;

		//while (tail->next != NULL)
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}

//头删
void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	//处理一个或者多个节点都可以，但是唯独不能处理节点为空
	/*if (*pphead == NULL)
	{
		return;
	}*/
	assert(*pphead != NULL);//节点为空直接报错
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SListFind(SLTNode* phead, SLTDateType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;//来到这里说明到最后都没有找到，返回空
}

//在pos位置之前去插入一个节点
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	assert(pphead);
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		//相当于头插了，可以调用其函数
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		//找到pos的前一个位置
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

//在pos之后去插入，更合适，也更简单
void SListInsertAfter(SLTNode* pos, SLTDateType x)
{
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)
	{
		//相当于头删
		/**pphead = pos->next;
		free(pos);*/
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

//删除后一个
void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);//报错就说明你用错来
	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
	//next = NULL;//置不置空没有意义
}

void SListDestory(SLTNode** pphead)//销毁链表
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}