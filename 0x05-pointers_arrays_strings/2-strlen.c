#include "main.h"
#include "string.h"
/**
 *  _strlen - function that returns the length of a string
 *
 *  @s: param
 *
 *  Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
	}
	return (length);
}
