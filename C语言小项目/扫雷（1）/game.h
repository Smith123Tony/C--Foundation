#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define LIN 9

#define ROWS ROW+2
#define LINS LIN+2

#define EASY_COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][LINS], int rows, int lins, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][LINS],int row,int lin);

//布置雷
void SetMine(char board[ROWS][LINS], int row, int lin);

//排查雷
void FindMind(char mine[ROWS][LINS], char show[ROWS][LINS], int row, int lin);

//统计周围8个坐标的情况并返回
int get_mine_count(char mine[ROWS][LINS], int x, int y);

