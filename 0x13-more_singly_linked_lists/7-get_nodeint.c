#include "lists.h"

/**
 * get_nodeint_at_index - nth node of listint_t
 * @head: ptr of fst node
 * @index: ind of node
 * Return: ptr of indx
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);

	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
