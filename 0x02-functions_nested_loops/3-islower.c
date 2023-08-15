#include "main.h"

/**
 *  _islower -  function that checks for lowercase character
 *
 * @c: checks input of the function
 *
 * Return: return 1 if 'c' is lowercase
 *         otherwise alwayes 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
