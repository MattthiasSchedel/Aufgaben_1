#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Height 20
#define Length 60


//Builds Frame
init_board(int Board[Height][Length])
{
	for (int i = 0; i < Height; i++)
	{
		for (int f = 0; f < Length; f++)
		{
			if ((i == 0) || (i == Height-1) || (f == 0) || (f == Length-1))
				Board[i][f] = 1;
			else
				Board[i][f] = 0;
		}
	}
}

//Adds one block to the Array

void Blocks(int Board[Height][Length])
{
	int Rand = rand(), r = (Rand % 4) + 3, X, Y;
	
	Rand = rand()+clock(), X = Rand % (Length - r);
	Rand = rand()+clock(), Y = Rand % (Height - r);
		

	for (int i = 0; i < r; i++)
	{
		for (int f = 0; f < r; f++)
		{
			Board[Y + i][X + f] = Board[Y + i][X + f] || 1;
		}
	}
}


void main()
{
	int Board[Height][Length];
	char c;
	do
	{
		//clears the board if you want to print a new one
		system("cls");
		init_board(Board);

		//runs block-function multiple times
		for (int i = 0; i < Height; i++)
		{
			Blocks(Board);
		}	
		writer(Board);

		printf("another one?(y)");
		c = _getwch();
	} while (c == 'y');
}

//prints the Board including blocks
int writer(int Board[Height][Length])
{
	for (int i = 0; i < Height; i++)
	{
		for (int f = 0; f < Length; f++)
		{
			if (Board[i][f] == 1)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
}