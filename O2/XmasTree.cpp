#include "Christmas_Object.h"

void xmas_object::do_something() 
{
	printf("Under the christmas tree you can find:\n");
	for (int i = 0; i < size(presents); i++)
	{
		printf("a %s\n", names[presents[i]]);
	}
}