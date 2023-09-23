#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to the list_t list
 * @str: a new string to add inside node
 *
 * Return: address of the new element and,  NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}
