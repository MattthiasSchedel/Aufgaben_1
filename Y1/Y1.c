#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Height 20
#define Lenght 60


//Builds Frame
init_board(int Board[Height][Lenght])
{
	for (int i = 0; i < Height; i++)
	{
		for (int f = 0; f < Lenght; f++)
		{
			if ((i == 0) || (i == Height-1) || (f == 0) || (f == Lenght-1))
				Board[i][f] = 1;
			else
				Board[i][f] = 0;
		}
	}
}

//Adds one block to the Array

void Blocks(int Board[Height][Lenght])
{
	int Rand = rand()*clock(), r, X = Rand % Lenght, Y;
	Rand = rand(), Y = Rand % Height;
	Rand = rand(), r = (Rand % 4) + 3;

	if (Y > (Height - r))
		Y = Y - r;
	for (int f = 0; f < r; f++)
	{
		for (int i = 1; i <= r; i++)
		{
			Board[Y + f][X + i] = Board[Y + f][X + i] || 1;
		}
	}
}


void main()
{
	int Board[Height][Lenght];
	char c;
	int X = Lenght, Y = Height;
	do
	{
		//clears the board if you want to print a new one
		system("cls");
		init_board(Board);

		//runs block-function multiple times
		for (int i = 1; i <= Height; i++)
		{
			Blocks(Board);
		}	
		writer(Board);

		printf("another one?(y)");
		c = _getwch();
	} while (c == 'y');
}

//prints the Board including blocks
int writer(int Board[Height][Lenght])
{
	for (int i = 0; i < Height; i++)
	{
		for (int f = 0; f < Lenght; f++)
		{
			if (Board[i][f] == 1)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
}