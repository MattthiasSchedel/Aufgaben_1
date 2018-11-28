#include <conio.h>
#include <stdio.h>
#include <string.h>

//print combination of two syllables
int combi(char string[3][5])
{
	for (int i = 0; i < 3; i++)
		for (int f = 0; f < 3; f++)
		{
			printf("%s", string[i+1]);
			printf("%s\n", string[f + 1]);
		}
}

void main()
{
	char string[3][5];
// get user input
	printf("Enter syllable #1: ");
	scanf_s("%s", string[1], 5);
	printf("Enter syllable #2: ");
	scanf_s("%s", string[2], 5);
	printf("Enter syllable #3: ");
	scanf_s("%s", string[3], 5);

	combi(string);

	_getch();
}