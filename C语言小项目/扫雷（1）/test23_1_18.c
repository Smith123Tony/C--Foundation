#define _CRT_SECURE_NO_WARNINGS 1
//扫雷

#include"game.h"

void game()
{
	//1.需要存放布置好的雷的信息，存放排查好的雷的信息，同时需要一个二维数组
	//2.排查坐标的时候，为了防止坐标越界，我们会给数组的行和列分别增加2

	char mine[ROWS][LINS] = { 0 };
	char show[ROWS][LINS] = { 0 };
	//棋盘初始化
	InitBoard(mine,ROWS,LINS,'0');
	InitBoard(show, ROWS, LINS, '*');

	//打印棋盘
	DisplayBoard(show,ROW,LIN);//

	//布置雷
	SetMine(mine, ROW, LIN);
	//DisplayBoard(mine, ROW,LIN);//

	//排查雷
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
	srand((unsigned int)time(NULL));//srand函数需要的类型是unsigned int，而time返回值类型是SIZE_T，故需要强制类型转换
	int input = 0;
	do
	{
		menu();//菜单
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}



















