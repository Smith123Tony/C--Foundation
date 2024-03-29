#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("---------------------------\n");
	printf("----------1.play-----------\n");
	printf("----------0.exit-----------\n");
	printf("---------------------------\n");
}

// 整个游戏的算法实现

void game()
{
	char ret = 0;//接收四种状态的返回值

	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };
	
	//棋盘初始化-本质上就是初始化数组
	InitBoard(board,ROW,COL);

	//打印棋盘(或显示棋盘)
	DiplayBoard(board, ROW, COL);

	//下棋
	while (1)
	{
		//玩家下棋
		PlayMove(board, ROW, COL);
		DiplayBoard(board, ROW, COL);
		//判断玩家是否赢

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DiplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	menu();//打印菜单
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:>");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}