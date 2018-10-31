#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void set_cursor_position(int x, int y)
{
	//Initialize the coordinates
	COORD coord = { x, y };
	//Set the position
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

init_board()
{
	int k = 1, X = 20, Y = 60, l = 1;
	//Rectangle printed by if statment in while loop
	while (k <= X)
	{
		//Prints top and bottom row
		if (((k == 1) || (k == X)) && (l <= Y))
		{
			printf("#");
			l++;
		}
		//Prints left and right walls
		else if (((k > 1) || (k < X)) && ((l == Y) || (l == 1)))
		{
			printf("#");
			l++;
		}
		//Prints volume of rectangle
		else if (((k > 1) || (k > X)) && ((l < Y) && (l > 1)))
		{
			printf(" ");
			l++;
		}
		//Prints new line 
		else if (l > Y)
		{
			k++;
			l = 1;
			printf("\n");
		}

	}
}

void Blocks(int r)
{
	int ran = r % 4, Len = ran + 2, X = r % 56, Y = r % 15;

	for (int i = 1; i <= Len; i++)
	{
		set_cursor_position(X, Y+i);
		for (int g = 1; g <= Len; g++)
		{
			printf("#");
		}
	}
}



void main()
{
	char c;
	do
	{
		system("cls");
		init_board();
		for (int i = 1; i <= 20; i++)
		{
			int Rand = rand();
			Blocks(Rand);
		}
		set_cursor_position(20, 21);
		printf("another one?(y)");
		c = _getwch();
	} while (c == 'y');
	_getch();
}