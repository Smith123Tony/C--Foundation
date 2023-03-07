#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"


//��ʼ��
LTNode* ListInit(LTNode* phead)
{
	//�ڱ�λͷ�ڵ�
	phead = (LTNode*)malloc(sizeof(LTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
	//���÷���ֵ�ķ�ʽ
}

void ListPushBack(LTNode* phead, LTDateType x)
{
	//����Ϊ��ʱ����Ȼ���Դ���
	assert(phead);
	//LTNode* tail = phead->prev;//�ҵ�β�ڵ�
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
	LTNode* cur = phead->next;//��phead->��ʼ��������

	while (cur != phead)//Ϊ�˷�ֹ��ѭ����������ֹ����Ϊcur=phead
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);//������Ϊ��ʱ���ͱ�ʾ������ɾ����

	////�ҵ�β
	//LTNode* tail = phead->prev;
	//phead->prev = tail->prev;
	//tail->prev->next = phead;

	////����ͷſռ�
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

//ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	////����Ϊ�վͲ���Ҫͷɾ��
	//LTNode* next = phead->next;
	//LTNode* nextNext = next->next;

	//phead->next = nextNext;
	//nextNext->prev = phead;

	//free(next);
	ListErase(phead->next);
}

//����
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
	//û�ҵ��ͷ���NULL
	return NULL;
}

//posλ��֮ǰ����
void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = BuyListNode(x);

	//����posPrev  newnode  pos����֮������ӹ�ϵ
	posPrev->next = newnode;
	newnode->prev = posPrev;

	newnode->next = pos;
	pos->prev = newnode;
}

//ɾ��posλ��
void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}

//��������
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
	//��Ҫ��phead��Ϊ�գ���Ҫ�ٺ����ⲿ�����ÿգ���Ȼ���������ָ��Ҳ�����ں����ڲ���
	//phead��Ϊ�գ�������Ϊ�������˫�������Ǵ���һ��ָ�룬����Ϊ�˱��ֽӿ�һ���ԣ�
	//�����ں����ⲿ��phead��Ϊ�ռ���
}