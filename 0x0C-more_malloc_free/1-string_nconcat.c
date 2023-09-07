#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	result = malloc(sizeof(char) * (count1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= count2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			result[i] = s1[i];
		}
		for (i = 0; s2[i] != '\0'; i++)
			result[count1 + i] = s2[i];
		result[count1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[count1 + i] = s2[i];
		result[count1 + i] = '\0';
	}
	return (result);
}
