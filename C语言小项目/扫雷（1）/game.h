#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define LIN 9

#define ROWS ROW+2
#define LINS LIN+2

#define EASY_COUNT 10

//��ʼ������
void InitBoard(char board[ROWS][LINS], int rows, int lins, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][LINS],int row,int lin);

//������
void SetMine(char board[ROWS][LINS], int row, int lin);

//�Ų���
void FindMind(char mine[ROWS][LINS], char show[ROWS][LINS], int row, int lin);

//ͳ����Χ8����������������
int get_mine_count(char mine[ROWS][LINS], int x, int y);

