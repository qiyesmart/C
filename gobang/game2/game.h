#ifndef _GAME_H_
#define _GAME_H_

#define  ROW 5
#define  COL 5

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void Initboard(char board[ROW][COL], int row, int col);
void Printboard(char  board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Comeputermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);







#endif //_GAME_H_
