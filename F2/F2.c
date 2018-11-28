#include<stdio.h>
#include<conio.h>
#include<time.h>

//recursive function
int fibonacci_resurvive(fib)
{
	int z;
	if ((fib == 1) || (fib == 0))
		return fib;	
	else	
		z = fibonacci_resurvive(fib-2) + fibonacci_resurvive(fib-1);	
	return z;
}
//loop  in the function
int fibonacci_iterative(fib)
{
	int one = 1, null = 0, z;
	if ((fib == 1) || (fib == 0))
		return fib;
	else
		for (int i = 1; i < fib; i++)
		{
			z = one + null;
			null = one;
			one = z;
		}
	return z;
}

int main()
{
	int c;
	do
	{
		//get user input F
		int enter, start, end, one, two;
		printf("Enter the fib:");
		scanf_s("%d", &enter);

		//Use recursuve fuction to calculate fibonacci numebr
		start = clock();
		printf("F(%d)\tis according to fibonacci_recursive()\t%d\n",enter, fibonacci_resurvive(enter));
		end = clock();
		one = end - start;

		//Use loop to calculate fibonacci number
		start = clock();
		printf("F(%d)\tis according to fibonacci_iterative()\t%d\n", enter, fibonacci_iterative(enter));
		end = clock();
		two = end - start;
		
		//output of time used to calculate with functions
		printf("fibonacci_recursive() took %.3fs\n",one/1000.0f);
		printf("fibonacci_iterative() took %.3fs\n\n",two/1000.0f);

		c = _getwch();
	} while (c == 'y');
}