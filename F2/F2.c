#include<stdio.h>
#include<conio.h>
#include<time.h>

int Fn = 0, Fn1 = 1, Fn2 = 1;
int fibonacci_recursive(int n)
{	
	if (n < 2)
		return n;
	else
		return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);	
}

void main()
{
	int n;
	printf("Enter the Number n:");
	scanf_s("%d", &n);
	clock_t t0 = clock();
	printf("F(%d)  is according to fibonacci_recursive() %d\n\n", n, fibonacci_recursive(n));
	clock_t t1 = clock();
	clock_t av = t1 - t0;
	printf("%Lf"),av;

	_getch();
}