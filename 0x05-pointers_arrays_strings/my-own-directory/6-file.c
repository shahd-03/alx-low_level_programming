#include "myheader.h"
#include <stdio.h>

void puts2(char *str)
{
	int i;
	
	for  (i = 0; i < *(str + i); i++)
	{
		printf("%c", *(str + i++));
	}
	printf("\n");
}
