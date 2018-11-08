#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

Board[1200];

init_board(int X, int Y)
{
	for (int i = 0; i < (X*Y); i++)
	{
		if ((i < X - 1) || (i % X == 0) || (i > (X*Y) - X)|| (i % X == X - 1))
		{
			Board[i+1] = 1;
		}
		else 
		{
			Board[i+1] = 0;
		}
	}
}

void Blocks(int X, int Y)
{
	int Rand = rand(), r = (Rand % 4) + 3, E=Rand%(X*Y);
	if (E > (X*Y) - (r * X))
	{
		E = E - r * X;
	}
	for (int g = 0; g < r; g++)
	{
		E = E + X;
		for (int i = 1; i <= r; i++)
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
		printer(X, Y);

		printf("another one?(y)");
		c = _getwch();
	} while (c == 'y');
}

int printer(int X,int Y)
{
	for (int i = 0; i < X*Y; i++)
	{
		if ((Board[i + 1] == 1)&&(i%X!=X-1))
		{
			printf("#");
		}
		else if (Board[i + 1] == 0)
		{
			printf(" ");
		}
		else 
		{
			printf("#\n");
		}
		
	}
}