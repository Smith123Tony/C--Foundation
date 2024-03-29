#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DiplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);


//告诉我们四种游戏的状态
//玩家赢  '*'
//电脑赢  '#'
//平局    'Q'
//继续    'C'
char IsWin(char board[ROW][COL], int row, int col);