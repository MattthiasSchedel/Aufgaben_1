#include<conio.h>
#include<stdio.h>

//Float function to calculate sum and average;
float statistics(int one,int two,int three, float*s,float*a)
{
	*s = one + two + three;
	*a = *s / 3;	
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
				statistics(one, two, three,&s,&a);
				printf("n1=%d n2=%d n3=%d --> sum=%.2f avg=%.2f\n", one, two, three, s, a);				
			}
		}
	}
	_getch();
}