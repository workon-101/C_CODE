#include "game.h"



void InitplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayerBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i < row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j < col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col, char set)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf("pleses input coordinate\n>:");
		scanf("%d%d", &x, &y);
		if(x >= 1 && x <= row && y >= 1 && y <= col && board[x-1][y-1] == ' ')
		{
			board[x-1][y-1] = set;
			break;
		}
		else
		{
			printf("coordinate is wrong, plese input again\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col, char set)
{
	while(1)
	{
		int x = rand()%row;
		int y = rand()%col;
		if(board[x][y] == ' ')
		{
			board[x][y] = set;
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j] != ' ')
			{
				count++;
			}
		}
	}
	if(count == row*col)
	{
		return 1;
	}
	return 0;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for(i=0; i < row ; i++)
	{
		count = 0;
		for(j=0; j < col-1; j++)
		{
			if(board[i][j] != ' ' && board[i][j] == board[i][j+1])
			{
				count++;
			}
		}
		if(count == col-1)
		{
			return board[i][0];
		}
	}
	for(i=0; i < col ; i++)
	{
		count = 0;
		for(j=0; j < row-1; j++)
		{
			if(board[j][i] != ' ' && board[j][i] == board[j+1][i])
			{
				count++;
			}
		}
		if(count == row-1)
		{
			return board[0][i];
		}
	}
	count = 0;
	for(i=0; i < row-1; i++)
	{
		if(board[i][i] != ' ' && board[i][i] == board[i+1][i+1])
		{
			count++;
		}
	}
	if(count == row-1)
	{
		return board[0][0];
	}
	count = 0;
	for(i=0; i < row-1; i++)
	{
		if(board[i][col-1-i] != ' ' && board[i][col-1-i] == board[i+1][col-2-i])
		{
			count++;
		}
	}
	if(count == row-1)
	{
		return board[0][col-1];
	}
	if(IsFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}
