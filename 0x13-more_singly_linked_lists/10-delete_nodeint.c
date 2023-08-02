#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delet node in indx
 * @head: dbl ptr
 * @index: indx of nod
 * Return: ptr to indx
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}

	tmp = *head;

	for (i = 0; i < indx - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	nxt = tmp->next;
	tmp->next = nxt->next;
	free(nxt);

	return (1);

}
