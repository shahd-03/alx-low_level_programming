#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 *
 * @array : specific number of integers
 * @size : length of array
 * @cmp : pointer points to a function
 *
 * Return: index of integer
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
