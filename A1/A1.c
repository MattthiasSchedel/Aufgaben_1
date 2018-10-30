#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>	
#define SetCoordinates COORD coord = { x = r + l , y = r + k };SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

int main()
{
	int f;
	printf("How many frames do you want?");
	scanf_s("%d", &f);
	int SC = (f * 2) + 2, r, x, y;
	do
	{
		for (int g = 0; g <= SC; g = g + 2)
		{
			int X, Y, k = 1, l = 1;
			Y = g, X = g;
			r = (SC / 2) + 2 - (g / 2);

			//Rectangle printed by if statment in while loop
			while (k <= X)
			{
				//Prints top and bottom row
				if (((k == 1) || (k == X)) && (l <= Y))
				{
					SetCoordinates;
					printf("#");
					l++;
				}
				//Prints left and right walls
				else if (((k > 1) || (k < X)) && ((l == Y) || (l == 1)))
				{
					SetCoordinates;
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
				}
			}
			Sleep(100);
			system("cls");
		}
	} while (true);

	printf("\n");
	printf("Press any key to exit this program");
	_getch();
}
#include <windows.h>

