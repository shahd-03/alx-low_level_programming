#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: It is apointer to the first node
 * @n: It is a data to insert in that new node
 *
 * Return: pointer to the new node and, if it fails return NULL
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
