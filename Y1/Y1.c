#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int Board[1200];

init_board(int X, int Y)
{
	for (int i = 0; i < (X*Y); i++)
	{
		if ((i < X - 1) || (i % X == 0) || (i > (X*Y) - X))
		{
			printf("#");
			Board[i+1] = 1;
		}
		else if (i % X == X - 1)
		{
			printf("#\n");
			Board[i+1] = 1;
		}
		else 
		{
			printf(" ");
			Board[i+1] = 0;
		}
	}
}

void Blocks(int X, int Y)
{
	int Rand = rand(), r = (Rand % 4) + 3, E=Rand%(X*Y);
	for (int g = 0; g < r; g++)
	{
		E = E + g * (Y - r);
		for (int i = 0; i < r; i++)
		{
			Board[E + i] = Board[E + i] | 1;
		}
	}
}



void main()
{
	char c;
	int X = 60, Y = 20;
	do
	{
		system("cls");
		init_board(X, Y);
		for (int i = 1; i <= 20; i++)
		{
			Blocks(X, Y);
		}
		printf("\n");
		for (int i = 1; i <= (X*Y); i++)
		{
			printf("%d", Board[i]);
		}
		printf("another one?(y)");
		c = _getwch();
	} while (c == 'y');
}