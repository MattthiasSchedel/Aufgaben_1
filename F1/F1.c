#include<conio.h>
#include<stdio.h>

//Float function to calculate sum and average;
float statistics(int one,int two,int three)
{
	*s = one + two + three;
	*a = s / 3;	
	printf("sum=%.0f avg=%.2f\n", s, a);
}


void main()
{
	float s, a;
	for (int one = 0; one <= 5; one++)
	{
		for (int two = 0; two <= 5; two++)
		{
			for (int three = 0; three <= 5; three++)
			{
				statistics(one, two, three);
				printf("n1=%d n2=%d n3=%d --> sum=%f avg=%f", one, two, three, s, a);				
			}
		}
	}
	_getch();
}