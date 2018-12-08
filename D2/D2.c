#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define max_str_len 5000
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char** all_notes = malloc(sizeof(char*) * 1);

	int number_of_notes = 0;

	///------------------------------------------///
	printf("Welcome to this small notepad\n");
	printf("press a key to get to the menu");
	_getwch();

	while (1)
	{
		system("cls");


		printf("Menu:\n-------------------------------------------\n");
		printf("1) New note\n");
		printf("2) Show all notes\n");
		printf("3) Exit programm");

		char c = _getwch();

		///--------------------------------------///
		if (c == '1')
		{
			system("cls");
			printf("Enter note #%d\n", number_of_notes + 1);

			char input[max_str_len];

			gets_s(input, max_str_len);

			int len_input = sizeof(char)* strlen(input) + 1;
			all_notes[number_of_notes] = malloc(len_input);
			if (all_notes[number_of_notes] == NULL)
			{
				printf("Sorry, you are out of memory!");
				_getwch();
				continue;
			}

			strcpy_s(all_notes[number_of_notes], len_input, input);


			number_of_notes++;
			all_notes = realloc(all_notes, (number_of_notes + 1) * sizeof(char*));
		}
		///--------------------------------------///
		else if (c == '2')
		{
			system("cls");
			printf("Here are your saved notes:\n");
			printf("-------------------------------------------\n");

			for (int i = 0; i < number_of_notes; i++)
			{
				printf("Note #%d:%s\n", i + 1, all_notes[i]);
			}
			printf("-------------------------------------------\n");
			printf("Press any key to get to the menu");
			_getwch();
		}
		///--------------------------------------///
		else if (c == '3')
		{
			for (int i = 0; i < number_of_notes; i++)
			{
				free(all_notes[i]);
			}
			free(all_notes);
			break;
		}
	}
}