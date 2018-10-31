#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

//Programm to print random numbers in between borders defined by the user 

int main()
{
	int X, Y, Z, R;
	do
	{
		//Get user input to define lower and upper border
		printf("Enter lower border:");
		scanf_s("%d", &X);
		printf("Enter upper border:");
		scanf_s("%d", &Y);
		//X=lower border Y=upper border

		if (X != Y)
		{
			printf("I will generate 10 numbers between %d and %d...\n", X, Y);
			//calculate range of numbers
			Z = Y - X + 1;
			for (int c = 1;c <= 10;c++)
			{
				//create random number from 1 to Z. Adding lower border.
				R = rand() % Z;
				R = R + X;
				printf("%d\t", R);
			}
			printf("\n\n");
		}
	} while (X != Y);
	printf("\n\n");
	printf("Press any key to exit this programm");
	_getch();
}