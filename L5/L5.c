#include<stdio.h>

//Program that uses three different loops to print the numbers from 17 to 29 in steps of three

int main()
{
	//With a for-loop:
	printf("1. With a for-loop:\n");
	for (int i = 17; i <= 29; i = i + 3)
	{
		printf("%d ", i);
	}
	printf("\n\n");

	//With a  while-loop:
	printf("2. With a while-loop:\n");
	int g = 17;
	while (g <= 29)
	{
		printf("%d ", g);
		g = g + 3;
	}
	printf("\n\n");

	//With a do-while-loop:
	printf("3. With a do-while-loop:\n");
	int h = 17;
	do
	{
		printf("%d ", h);
		h = h + 3;
	} while (h <= 29);
	_getch();
}