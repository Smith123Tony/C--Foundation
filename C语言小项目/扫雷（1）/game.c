#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
void InitBoard(char board[ROWS][LINS], int rows, int lins, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < lins; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][LINS], int row, int lin)
{
	int i = 0;
	int j = 0;
	printf("--------ɨ��---------\n");
	for (j = 0; j <= row; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= lin; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("--------ɨ��---------\n");
}


//������
void SetMine(char mine[ROWS][LINS], int row, int lin)
{
	int count = EASY_COUNT;
	while (count)
	{
		//1.��������±�
		int x = rand() % row + 1;
		int y = rand() % row + 1;

		//2.������
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//���ܷ���if����⣬ֻ�в����׳ɹ�֮��ſ���count--����Ϊ������������ظ���
		}

	}
}

//ͳ����Χ8����������������
int get_mine_count(char mine[ROWS][LINS], int x, int y)
{
	return(mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//�Ų���
void FindMind(char mine[ROWS][LINS], char show[ROWS][LINS], int row, int lin)
{
	printf("������Ҫ�Ų������:>");
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*lin-EASY_COUNT))
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (show[x][y] != '*')//��������ܱ��Ų��
			{
				printf("�����걻�Ų����\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, LIN);//��������Ϊʲô��ը��
				break;
			}
			else
			{
				int n = get_mine_count(mine, x, y);
				show[x][y] = n + '0';
				DisplayBoard(show, ROW, LIN);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}
	if (win == (row * lin - EASY_COUNT))
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, LIN);//��һ��������ô�ɹ���
	}
}




















































