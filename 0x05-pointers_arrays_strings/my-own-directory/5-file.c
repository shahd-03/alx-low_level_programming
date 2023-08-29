#include "myheader.h"
#include <stdio.h>

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; i <= *(s + i); i++)
	{

	}
	
	for (j = --i; j >= 0; j--)
	{
		printf("%c", *(s + j));
	}
	printf("\n");
}
				
