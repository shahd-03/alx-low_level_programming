#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 *
 * @h: it is linked list of type listint_t.
 *
 * Return: number of nodz
 */

size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
