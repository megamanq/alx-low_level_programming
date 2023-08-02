#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node in agiven pos
 * @head: dbl ptr
 * @idx: ind of node
 * @n: nw node val
 * Return: addr to nw node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *nw;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;

		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}

		if (tmp == NULL)
			return (NULL);
	}

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	nw->next = tmp->next;
	tmp->next = nw;

	return (nw);
}
