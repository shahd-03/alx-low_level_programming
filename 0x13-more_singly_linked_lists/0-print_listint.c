#include "lists.h"


/**
 * print_listint -  prints all the elements of a listint_t list.
 *
 * @h : it is linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}

	return (nm);
}
