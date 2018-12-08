#include <stdio.h>
#include <conio.h>
#define len 7
double bubblesort(double* random_numbers)
{
	int c;
	double comp[100];
	do {
		for (int i = 0; i < len - 1; i++)
		{
			if (random_numbers[i] > random_numbers[i + 1])
			{
				comp[i] = random_numbers[i + 1];

			}
		}



	} while (c == 1);
}




main()
{
	double random_numbers[] = { 1.3,3,4,6.00,2.30,14,3 };

	bubblesort(&random_numbers);


	for (int i = 0; i < len; i++)
	{
		printf("%lf\n", random_numbers[i]);
	}
	_getch();
}