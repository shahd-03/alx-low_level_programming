#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str : stores a string
 *
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ctr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; i < str[i]; i++)
	{

	}

	ctr = malloc((i + 1) * sizeof(char));

	if (ctr == NULL)
		return (NULL);
	for (i = 0; i < str[i]; i++)
		ctr[i] = str[i];
	return (ctr);
}
