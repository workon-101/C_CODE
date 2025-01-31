#include "game.h"








void menu()
{
	printf("********************************\n");
	printf("**************1.play************\n");
	printf("**************0.exit************\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("plese choose:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("exit the game\n");
				break;
			default:
				printf("input is wrong, plese choose again\n");
		}
	}
	while(input);
}

int main()
{
	test();
	return 0;
}
