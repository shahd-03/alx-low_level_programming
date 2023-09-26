#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 *
 * @head: A pointer to the first node of the linked list.
 *
 * Return: new_node.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tm_n = NULL;
	const listint_t *l_nn = NULL;
	size_t countr = 0;
	size_t new_w;

	tm_n = head;
	while (tm_n)
	{
		printf("[%p] %d\n", (void *)tm_n, tm_n->n);
		countr++;
		tm_n = tm_n->next;
		l_nn = head;
		new_w = 0;
		while (new_w < countr)
		{
			if (tm_n == l_nn)
			{
				printf("-> [%p] %d\n", (void *)tm_n, tm_n->n);
				return (countr);
			}
			l_nn = l_nn->next;
			new_w++;
		}
		if (!head)
			exit(98);
	}
	return (countr);
}
