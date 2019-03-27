#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define	len 100

int ch_to_int(char* input, float* numbers)
{
	int count_numbers = 0;
	float decimal_count = 0;
	for (int i = 0; i < len; i++)
	{
		if (input[i] == ' ')
		{
			numbers[count_numbers] = numbers[count_numbers] / powf(10, decimal_count);
			count_numbers++;
			decimal_count = 0;
		}
		if ((input[i] >= '0') && (input[i] <= '9'))
		{
			numbers[count_numbers] = (numbers[count_numbers] * 10) + (input[i]-'0');
		}
		if (input[i] == '.')
		{
			decimal_count++;
		}

	}
	return count_numbers;
}


int bubblesort(float* numbers, int how_many_numbers)
{
	float temp;
	for (int g = 0; g < how_many_numbers; g++)
	{
		for (int i = 0; i < how_many_numbers - 1; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
}

main()
{
	char input[len] = "";
	float numbers[len] = { 0 };

	
	FILE* fp;
	FILE* fn;
	char in[] = "C:\\Users\\Matthias\\Documents\\Test.txt";
	char out[] = "C:\\Users\\Matthias\\Documents\\Test_Sorted.txt";

	fp = fopen(in,"r");
	fn = fopen(out, "a");

	fread(input, sizeof(char), len, fp);

	int how_many_numbers = ch_to_int(input, numbers);

	bubblesort(numbers, how_many_numbers);

	for (int i = 0; i < how_many_numbers; i++)
	{
		printf("%.2f\n", numbers[i]);
		fprintf(fn, "%.2f", numbers[i]);
		fprintf(fn, "\n");
		
	}

	_getwch();
	fclose(fp);
	fclose(fn);
}
