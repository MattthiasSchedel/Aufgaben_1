#include<stdio.h>

/*Program that prints
0
0 1
0 1 2
0 1 2 3
0 1 2 3 4
0 1 2 3 4 5
0 1 2 3 4 5 6
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7 8 9
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *
by using two nested foor-loops*/

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
