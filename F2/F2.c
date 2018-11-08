#include<stdio.h>
#include<conio.h>

int fibonacci_resurvive(fib)
{
	int z;
	if ((fib == 1) || (fib == 0))
		return fib;	
	else	
		z = fibonacci_resurvive(fib-2) + fibonacci_resurvive(fib-1);	
	return z;
}

int fiboloop(fib)
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
		int enter, out;
		printf("Enter the fib:");
		scanf_s("%d", &enter);
		out = fibonacci_resurvive(enter);
		printf("%d\n", out);
		out = fiboloop(enter);
		printf("%d\n\n", out);
		c = _getwch();
	} while (c == 'y');
}