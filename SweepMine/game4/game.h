#ifndef  __GAME_H__
#define  __GAME_H__

#define EASY_COUNT 80
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Setmine(char board[ROWS][COLS], int row, int col);
void Printboard(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);



#endif //__GAME_H__