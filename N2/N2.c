#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	char* syllables[] = { "tan", "han", "klam", "ro", "ba", "lo" };
	
	printf("Given syllables:");
	for (int i = 0; i < 6; i++)
	{
		printf(" %s", syllables[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 10; i++)
	{
		int len = 0;
		char outPut[100] = "";
		int Ran = rand() % 4 + 2;
		for (int g = 0; g < Ran; g++)
		{
			int R = rand() % 6;
			len = sprintf_s(outPut, 100, "%s%s", outPut, syllables[R]);
		}
		printf("Generated word #%d has %d letters : %s \n", (i + 1), len, outPut);
	}

	_getch();
}