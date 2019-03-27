#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	FILE* f;
	f = fopen("C:\\Users\\Matthias\\Documents\\Test_Sorted.txt", "w");
	if (f == NULL)
	{
		printf("Error!");
		_getch();
		return;
	}
	

	fprintf(f,"");
	_getwch();
	fclose(f);
}