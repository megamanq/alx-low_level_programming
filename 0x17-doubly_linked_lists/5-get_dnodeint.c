#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head ptr
 * @index: index ofnode
 * Return: ptr of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		temp = head;
	}

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
	}
	return (temp);
}
