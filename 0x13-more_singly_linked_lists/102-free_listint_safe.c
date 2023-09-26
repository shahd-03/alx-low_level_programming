#include "lists.h"

/**
 * free_listint_safe - function frees a linked list.
 *
 * @h: A pointer to the 1st node in the linked list.
 *
 * Return: num of elems in th freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int dif;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}

	*h = NULL;

	return (ln);
}
