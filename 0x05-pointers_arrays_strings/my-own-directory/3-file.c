#include "myheader.h"
#include <stdio.h>

void _puts(char *str)
{
	int i;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
