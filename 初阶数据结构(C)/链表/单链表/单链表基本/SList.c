#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

SLTNode* BuyListNode(SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));

	//����Ƿ񿪱ٳɹ�
	if (newnode == NULL)
	{
		printf("malloc fail\n");//�ڴ�����ʧ�ܵĻ�˵���Ѿ�û�ж��ٿռ���
		exit(-1);//����ʧ����ֱ�ӽ�������
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

//β��
void SListPushBack(SLTNode** pphead, SLTDateType x)
{
	assert(pphead);
	SLTNode* newnode = BuyListNode(x);

	//�����������ɶҲû�е�
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//�ҵ�β��=�ڵ�
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//ͷ��
void SListPustFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SlistPopBack(SLTNode** pphead)
{
	//����һ��
	if (*pphead == NULL)
	{
		return;
	}

	//�ֱ�һ��
	//assert(*pphead != NULL);

	//�ߵ�������ζ��һ����һ���ڵ�
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

//ͷɾ
void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	//����һ�����߶���ڵ㶼���ԣ�����Ψ�����ܴ���ڵ�Ϊ��
	/*if (*pphead == NULL)
	{
		return;
	}*/
	assert(*pphead != NULL);//�ڵ�Ϊ��ֱ�ӱ���
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
	return NULL;//��������˵�������û���ҵ������ؿ�
}

//��posλ��֮ǰȥ����һ���ڵ�
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDateType x)
{
	assert(pphead);
	assert(pos);
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == pos)
	{
		//�൱��ͷ���ˣ����Ե����亯��
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		//�ҵ�pos��ǰһ��λ��
		SLTNode* posPrev = *pphead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

//��pos֮��ȥ���룬�����ʣ�Ҳ����
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
		//�൱��ͷɾ
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

//ɾ����һ��
void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);//�����˵�����ô���
	SLTNode* next = pos->next;
	pos->next = next->next;
	free(next);
	//next = NULL;//�ò��ÿ�û������
}

void SListDestory(SLTNode** pphead)//��������
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