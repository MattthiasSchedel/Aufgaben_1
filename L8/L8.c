#include<stdio.h>
#include<conio.h>

int main()
{
	char g;
		
	do {	
		int X, Y, Z = 1, H;
		printf("Number of rows for triangle");
		scanf_s("%d", &X);
		H = X + 2;
		for (int k = 1; k <= X; k++)
		{
			Y = H - k;
			for (int c = 1; c <= Y; c++)
			{
				printf(" ");
			}
			for (int c = 1; c <= Z; c++)
			{
				printf("*");
			}
			printf("\n");
			Z = Z + 2;
		}
		printf("again?(Y/N)");
		g = _getwch();

	} while ((g == 'y') || (g == 'Y'));
}
