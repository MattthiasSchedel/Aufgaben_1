#include<conio.h>
#include<stdio.h>

float statistics(int one,int two,int three)
{
	float s = one + two + three;
	float a = s / 3;	
	printf("sum=%.0f avg=%.2f\n", s, a);
}


void main()
{
	for (int one = 0; one <= 5; one++)
	{
		for (int two = 0; two <= 5; two++)
		{
			for (int three = 0; three <= 5; three++)
			{
				printf("n1=%d n2=%d n3=%d --> ", one, two, three);
				statistics(one, two, three);
			}
		}
	}
	_getch();
}