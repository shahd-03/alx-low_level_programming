#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 *
 * @head : A pointer to first node in the list.
 *
 * Return: pointer to the first node in nw list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = nxt;
	}

	*head = pre;

	return (*head);
}
