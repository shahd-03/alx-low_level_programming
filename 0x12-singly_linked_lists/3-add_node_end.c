#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t
 * @str: string to put in node
 *
 * Return: address of nw element, and  NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

	return (nw);
}
