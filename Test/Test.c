#include<conio.h>
#include<stdio.h>

main()
{
	int Y = 20, X = 60;
	for (int i = 0; i < (X*Y); i++)
	{
		if ((i < X-1) || (i % X == 0)||(i>(X*Y)-X))
		{
			printf("#");
		}
		else if (i % X == X - 1)
		{
			printf("#\n");
		}
		else printf(" ");
	}
	_getch();
}