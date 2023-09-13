#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param of array.
 *
 * @array : arr of eles
 * @size : size of an array
 * @action : pointer that points to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
