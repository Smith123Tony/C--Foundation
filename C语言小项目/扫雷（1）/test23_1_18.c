#define _CRT_SECURE_NO_WARNINGS 1
//ɨ��

#include"game.h"

void game()
{
	//1.��Ҫ��Ų��úõ��׵���Ϣ������Ų�õ��׵���Ϣ��ͬʱ��Ҫһ����ά����
	//2.�Ų������ʱ��Ϊ�˷�ֹ����Խ�磬���ǻ��������к��зֱ�����2

	char mine[ROWS][LINS] = { 0 };
	char show[ROWS][LINS] = { 0 };
	//���̳�ʼ��
	InitBoard(mine,ROWS,LINS,'0');
	InitBoard(show, ROWS, LINS, '*');

	//��ӡ����
	DisplayBoard(show,ROW,LIN);//

	//������
	SetMine(mine, ROW, LIN);
	//DisplayBoard(mine, ROW,LIN);//

	//�Ų���
	FindMind(mine,show,ROW,LIN);
}

void menu()
{
	printf("********************************\n");
	printf("************1. play*************\n");
	printf("************0. exit*************\n");
	printf("********************************\n");
}

void test()
{
	srand((unsigned int)time(NULL));//srand������Ҫ��������unsigned int����time����ֵ������SIZE_T������Ҫǿ������ת��
	int input = 0;
	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}



















