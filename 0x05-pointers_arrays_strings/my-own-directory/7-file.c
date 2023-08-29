#include "myheader.h"
#include <stdio.h>

void puts_half(char *str)
{
	int i;
	int j;


	for (i = 0; i < *(str + i); i++)
	{

	}

	for (j = 0; j < *(str + j); j++)
	{
		if (*(str + j) >= *(str + i / 2))
		{
			printf("%c", *(str + j));
		}
	}
	printf("\n");
}
					


