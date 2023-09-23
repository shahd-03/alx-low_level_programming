#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a list_t list
 *
 * @h: it is a Pointer to a list.
 *
 * Return: an Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int count = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		count++;
		tp = tp->next;
	}
	return (cntr);
}
