#include "myheader.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(src + i) != '\0'; i++)
	{

		for (j = 0; j < i; j++)
		{

		}
		*(dest + j) = *(src + j);
	
	}
	
	 return dest;
}
