#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


void InitplayBoard(char board[ROW][COL], int row, int col);
void DisplayerBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col, char set);
void ComputerMove(char board[ROW][COL], int row, int col, char set);
char IsWin(char board[ROW][COL], int row, int col);
