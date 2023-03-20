#define _CRT_SECURE_NO_WARNINGS 1

#include"Seqlist.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}

//����λ�ò���
void ListInsert(SL* ps, int i, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int j = 0;
	for (j = ps->size - 1; j >= i - 1; j--)
	{
		ps->a[j + 1] = ps->a[j];
	}
	ps->a[i - 1] = x;
	ps->size++;
}

void ListDelete(SL* ps, int i)
{
	int j = 0;
	for (j = i; j <= ps->size - 1; j++)
	{
		ps->a[j - 1] = ps->a[j];
	}
	ps->size--;
}

void SeqListCheckCapacity(SL* ps)
{
	//���û�пռ���߿ռ䲻�㣬������
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//�쳣ʱֱ����ֹ���򣬶�return��ֱ�Ӱ������������
		}
		//������˵���ռ俪�ٳɹ�
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}