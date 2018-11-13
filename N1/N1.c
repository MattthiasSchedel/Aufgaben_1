#include <conio.h>
#include <stdio.h>

int combi(char one, char two, char three)
{
	for (int i = 0; i < 9; i++)
	{
		switch (i%3)
		{
		case 1: printf("%c", one); break;
		}
	}
}

void main()
{
	char string1[2], string2[2], string3[2];
	printf("Enter three syllables...\n first:");
	scanf("%[^\t\n]", string1);
	printf("second:");
	scanf("%[^\t\n]", string2);
	printf("third");
	scanf("%[^\t\n]", string3);
	combi(&string1, &string2, &string3);
	_getch();
}