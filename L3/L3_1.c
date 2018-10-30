#include <stdio.h>

//Programm prints two seperate strings of numbers

int main()
{
	printf("Output for first for-loop:\n");
	for (int i = 75; i >= 15; i=i - 5)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	printf("Output for second for-loop:\n");
	for (int i = 1; i <= 47; i = i++)
	{
		printf("%d ", i);
	}
	printf("\n\n");
	printf("Press any key to exit this program");
	_getch();
}