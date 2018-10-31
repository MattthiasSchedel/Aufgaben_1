#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

main()
{
	float X, K, i = 1;
	char C, a;
	printf("Simple calculator:\nValid inputs are + -*/ = and digits 0, ..., 9\n");

	do
	{ 
		a = _getwch();		
	} while ((a < 48) || (a > 57));
	K = a - '0';
	printf("%.0f", K);

	do
	{
		do
		{
			while (i == 1)
			{
				C = _getwch();
				if ((C == '+') || (C == '-') || (C == '*') || (C == '/'))
				{
					printf("%c", C);
					i = 2;
				}
				else if (C == '=')
				{
					break;
				}
				else
				{
					printf("\a");
				}
			}

			while (i == 2)
			{
				a = _getwch();
				X = a - '0';
				if ((a>=48)&&(a<=57))
				{
					printf("%.0f", X);
					i = 3;
				}
				else				
					printf("\a");				
			}
			while (i == 3)
			{
				switch (C)
				{
				case('+'): K = K + X; break;
				case('*'): K = K * X; break;
				case('/'): K = K / X; break;
				case('-'): K = K - X; break;
				}
				i = 1;
			}
		} while (C != '=');
		printf("\n=%.2f", K);
		i = 1;
	} while (true);

	_getch();

}
