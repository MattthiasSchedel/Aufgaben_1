#include<stdio.h>
#include<conio.h>

//Programm to print a rectangle using only one loop (not counting the loop to repeat the whole process)

int main()
{	
	char c;
	//User can print more than one rectangle
	do
	{
		int X, Y, k = 1, l = 1;
		//Get height and length of rectangle
		printf("Height of rectangle:");
		scanf_s("%d", &Y);
		printf("Length of rectangle:");
		scanf_s("%d", &X);

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
			else if (((k > 1) || (k > X)) && ((l < Y) && (l>1)))
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
		printf("do you want to draw another rectangle?(Y/N)\n");
		c = _getwch();
	} while ((c == 'Y') || (c == 'y'));
	printf("\n");
	printf("Press any key to exit this program");
	_getch();
}