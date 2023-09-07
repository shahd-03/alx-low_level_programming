#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */


int *array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);
	result = malloc(sizeof(int) * ((max - min) + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		result[i] = min++;
	return (result);
}
