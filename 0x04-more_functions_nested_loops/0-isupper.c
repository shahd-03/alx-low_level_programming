#include "main.h"

/**
 * _isupper - rite a function that checks for uppercase character
 *
 * @c: checks for uppercase character
 *
 * Return: 1 if it is upper , otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
