#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: description for this member is here
 *
 * Return: Alwayes 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
