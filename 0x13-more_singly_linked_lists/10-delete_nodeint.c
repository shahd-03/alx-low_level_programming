#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list.
 * @head: pointer to the first element .
 * @index: index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curent = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	curent = tmp->next;
	tmp->next = curent->next;
	free(curent);

	return (1);
}
