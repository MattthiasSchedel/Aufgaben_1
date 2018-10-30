#include<stdio.h>

/*Program that prints two left-bound triangles, one with numbers and
the other one with stars, by using two nested foor-loops*/

int main()
{
	for (int i=0; i <= 9; i++)	{
		
		for (int f = 0; f <= i; f++)
		{
			printf("%d ", f);
		}
		printf("\n");
	}
	for (int i = 0; i <= 9; i++) {

		for (int f = 0; f <= i; f++)
		{
			printf("* ");
		}
		printf("\n");
	}
	_getch();
}
