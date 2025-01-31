#include "game1_game.h"


void menu1()
{
	printf("*******************************\n");
	printf("***1.play *********** 0.exit***\n");
	printf("*******************************\n");
}

void menu2()
{
	printf("***************************************\n");
	printf("**1.pve*********2.pvp**********0.exit**\n");
	printf("***************************************\n");
}

void game1()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		Player1Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("player win!!!!!!!!!\n");
	}
	else if(ret == '#')
	{
		printf("computer win!!!!!!!!\n");
	}
	else
	{
		printf("not have winner\n");
	}
}

void game2()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		Player1Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		Player2Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("player1 win!!!!!!!!!\n");
	}
	else if(ret == '#')
	{
		printf("player2 win!!!!!!!!!\n");
	}
	else
	{
		printf("not have winner\n");
	}
}

void moder()
{
	int input = 0;
	do
	{
		menu2();
		printf("plese choose moder:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game1();
				break;
			case 2:
				game2();
				break;
			case 0:
				printf("exit choose moder\n");
				break;
			default:
				printf("input is wrong, plese choose again\n");
		}
	}
	while(input);
	
}

void test()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu1();
		printf("plese choose:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				moder();
				break;
			case 0:
				printf("exit the geme\n");
				
				break;
			default:
				printf("input to wrong, pleses choose again\n");
				
				break;
		}
	}
	while(input);
}

int main()
{
	test();
	return 0;
}
