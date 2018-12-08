#include<conio.h>
#include<stdio.h>
#include <stdlib.h> // malloc

main()
{
	int amount;
	char c;

	do
	{
		//ask for user input
		printf("How many lines do you want?");
		scanf_s("%d", &amount);
		float* A = malloc(amount * sizeof(float));
		if (A == NULL)
		{
			printf("Out of memory error!\n");
			exit(1);
		}
		//Set numbers in array according to rules
		for (int i = 0; i < amount; i++)
		{
			if (i < (float)(amount / 2))
			{
				A[i] = 123.0;
			}
			else if (i > (float)(amount / 2))
			{
				A[i] = 456.0;
			}
			else if (i == (float)(amount / 2))
			{
				A[i] = 999.0;
			}
		}
		//Print numbers in array
		for (int i = 0; i < amount; i++)
		{
			printf("A[%d]=%.1f\n", i, A[i]);
		}
		//deallocate array..
		printf("Deallocating the array ...");
		free(A);
		//loop statement
		printf("press 'y' to allocate another array");
		c = _getwch();

	} while (c == 'y');	
}