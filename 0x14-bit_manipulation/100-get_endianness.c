#include "main.h"

/**
 * get_endianness - check endians.
 *
 * Return: 0 if big endian, or 1 if little endin.
*/
int get_endianness(void)
{
	int nm;

	nm = 1;
	if (*(char *)&nm == 1)
		return (1);
	else
		return (0);
}

