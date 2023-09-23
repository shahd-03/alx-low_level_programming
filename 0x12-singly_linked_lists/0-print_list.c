#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list.
 *
 * @h: Pointer to the list
 *
 * Return: An integer
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
