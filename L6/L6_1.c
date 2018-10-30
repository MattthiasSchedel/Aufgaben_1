#include<stdio.h>
#include<conio.h>

//Programm to print a rectangle with variable height and length

int main()
{
	char c;
	do
	{
		int L;
		int H;
		printf("Height of rectangle?");
		scanf_s("%d", &H);
		printf("Length of rectangle?");
		scanf_s("%d", &L);


		int Y = H - 2;
		int X = L - 2;

		for (int f = 1; f <= L; f++)
		{
			printf("#");
		}
		printf("\n");
		for (int f = 1;f <= Y; f++)
		{
			printf("#");
			for (int g = 1; g <= X; g++)
			{
				printf(" ");
			}
			printf("#");
			printf("\n");
		}
		for (int f = 1; f <= L; f++)
		{
			printf("#");
		}
		printf("\n");
		printf("Do you want to print a new rectangle? (Y/N)");
		c = _getwch();
		printf("\n");
	} while ((c == 'y')|| (c == 'Y'));
	printf("press any key to exit this programm");		
	_getch();
}