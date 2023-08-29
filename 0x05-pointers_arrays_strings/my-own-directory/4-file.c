#include "myheader.h"
#include <stdio.h>

void print_rev(char *s)
{
	int i;
	for (i = 0; *(s + i) != 0; i++)
	{

	}
	for (--i; *(s + i) != 0; i--)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
