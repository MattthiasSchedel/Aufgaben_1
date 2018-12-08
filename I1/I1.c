#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define maxinput 100

//to copy		C:\Users\Matthias\Documents\test.txt
//				C:\\Users\Matthias\\Documents\\test.txt



main() {

	//get user input
	char input[maxinput];
	fgets(input, maxinput, stdin);
	strtok(input, "\n");

	//open file with path entered by user
	FILE* f;
	f = fopen(input, "r");
	if (f == NULL) {
		printf("Error while trying to open file %s for reading!\n", input);
		_getch();
		return;
	}

	//copy one line at a time from file f to singletextline, return true
	int nr_lines = 0;
	char single_textline[1000];
	while (fgets(single_textline, sizeof(single_textline), f))
	{
		nr_lines++;//count lines in textfile
	}
	printf("The file\"%s\" contains: %d lines\n", input, nr_lines);
	int retcode_fclose = fclose(f);
	if (retcode_fclose != 0) {
		printf("Error while trying to close file %s!\n", input);
	}
	_getch();
}