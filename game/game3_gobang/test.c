#include "game.h"


void menu1()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}

void menu2()
{
	printf("*****************************\n");
	printf("*************1.pve***********\n");
	printf("*************2.pvp***********\n");
	printf("*************0.exit**********\n");
	printf("*****************************\n");
}

void game_pve()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitplayBoard(board, ROW, COL);
	DisplayerBoard(board, ROW, COL);
	while(1)
	{
		printf("player move\n");
		PlayerMove(board, ROW, COL, '*');
		DisplayerBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
		printf("computer move\n");
		ComputerMove(board, ROW, COL, '#');
		DisplayerBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
	}
	if(ret == '*')
	{
		printf("player is winner!!!!!!!!!!!\n");
	}
	else if(ret == '#')
	{
		printf("computer is winner!!!!!!!!!!!!!\n");
	}
	else
	{
		printf("not have winner\n");
	}
}

void game_pvp()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitplayBoard(board, ROW, COL);
	DisplayerBoard(board, ROW, COL);
	while(1)
	{
		printf("player1 move\n");
		PlayerMove(board, ROW, COL, '*');
		DisplayerBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
		printf("player2 move\n");
		PlayerMove(board, ROW, COL, '#');
		DisplayerBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
	}
	if(ret == '*')
	{
		printf("player1 is winner!!!!!!!!!!!\n");
	}
	else if(ret == '#')
	{
		printf("player2 is winner!!!!!!!!!!!!!\n");
	}
	else
	{
		printf("not have winner\n");
	}
}

void test2()
{
	int input = 0;
	do
	{
		menu2();
		printf("pleses choose moder:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game_pve();
				break;
			case 2:
				game_pvp();
				break;
			case 0:
				printf("exit choose moder\n");
				break;
			default:
				printf("input is wrong, plese choose moder again\n");	
				break;	
		}
	}
	while(input);
}

void test1()
{
	srand((unsigned int) time(NULL));
	int input =  0;
	do
	{
		menu1();
		printf("pleses choose>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				test2();
				break;
			case 0:
				printf("exit the game\n");
				break;
			default:
				printf("input is wrong, plese choose again\n");
				break;
		}
		
	}
	while(input);
}

int main()
{
	test1();
	return 0;
}
