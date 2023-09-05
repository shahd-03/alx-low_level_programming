#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *myarr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	myarr = malloc(sizeof(char) * size);

	if (myarr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		myarr[i] = c;

	return (myarr);
}




