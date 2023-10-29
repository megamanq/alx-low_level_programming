#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t
 * @head: headptr
 * @index: is the index
 * Return: 1 on succ -1 on fial
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;

	if (!(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	len = 0;
	while (temp && len < index)
	{
		temp = temp->next;
		len++;
	}
	if (!temp)
		return (-1);
	if (len == index)
	{
		if (temp->prev)
			temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
