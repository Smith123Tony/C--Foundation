#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
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

//打印棋盘
void DisplayBoard(char board[ROWS][LINS], int row, int lin)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷---------\n");
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
	printf("--------扫雷---------\n");
}


//布置雷
void SetMine(char mine[ROWS][LINS], int row, int lin)
{
	int count = EASY_COUNT;
	while (count)
	{
		//1.生成随机下标
		int x = rand() % row + 1;
		int y = rand() % row + 1;

		//2.布置雷
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//不能放在if语句外，只有布置雷成功之后才可以count--，因为坐标可能生成重复的
		}

	}
}

//统计周围8个坐标的情况并返回
int get_mine_count(char mine[ROWS][LINS], int x, int y)
{
	return(mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//排查雷
void FindMind(char mine[ROWS][LINS], char show[ROWS][LINS], int row, int lin)
{
	printf("请输入要排查的坐标:>");
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*lin-EASY_COUNT))
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (show[x][y] != '*')//该坐标可能别排查过
			{
				printf("该坐标被排查过了\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, LIN);//看看自已为什么被炸死
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
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == (row * lin - EASY_COUNT))
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, LIN);//看一下自已怎么成功的
	}
}




















































