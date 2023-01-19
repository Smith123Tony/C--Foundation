#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("---------------------------\n");
	printf("----------1.play-----------\n");
	printf("----------0.exit-----------\n");
	printf("---------------------------\n");
}

// ������Ϸ���㷨ʵ��

void game()
{
	char ret = 0;//��������״̬�ķ���ֵ

	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };
	
	//���̳�ʼ��-�����Ͼ��ǳ�ʼ������
	InitBoard(board,ROW,COL);

	//��ӡ����(����ʾ����)
	DiplayBoard(board, ROW, COL);

	//����
	while (1)
	{
		//�������
		PlayMove(board, ROW, COL);
		DiplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DiplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	menu();//��ӡ�˵�
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
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
			printf("ѡ�����������ѡ��:>");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}