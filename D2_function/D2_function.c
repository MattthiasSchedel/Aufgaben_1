#include <conio.h>
#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h>
#include <stdbool.h>
#define maxinput 100

void resizeStrings(char*** All_Notes, int* how_many_notes)
{
	system("cls");
	printf("Enter note #%d\n", how_many_notes + 1);

	unsigned int lenInput;
	char input[maxinput];
	//get user input
	fgets(input, maxinput, stdin);
	//get length of input
	lenInput = strlen(input);
	how_many_notes++;

	//set array to size
	All_Notes = realloc(All_Notes, (how_many_notes+0) * sizeof(char*));
	for (int y = 0; y < how_many_notes; y++)
	{
		All_Notes[how_many_notes - 1] = malloc(100 * sizeof(char));
	}
	sprintf_s(All_Notes[how_many_notes - 1], maxinput, "%s", input);
}

output(char** All_notes, int* how_many_notes)
{
	system("cls");
	printf("You stored %d notes:\n", how_many_notes);
	for (int i = 0; i < how_many_notes; i++)
	{
		printf("Note #%d: %s", i + 1, All_Notes[i]);
	}
	printf("\n\n\tPress any key to get to the menu");
	_getch();
}

main()
{
	char** All_Notes = malloc(sizeof(char*));
	unsigned int how_many_notes = 0;
	char c;

	do
	{
		system("cls");

		printf("Welcome to this small notepad\n1) new note\n2) show notes\n3) exit small notepad");
		c = _getwch();

		if (c == '1')
		{
			resizeStrings(All_Notes, &how_many_notes);
		}

		else if (c == '2')
		{
			output(All_Notes, &how_many_notes);
		}

		else if (c == '3')
		{
			break;
		}

	} while (true);
}

