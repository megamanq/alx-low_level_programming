#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: ptr to list
 * Return: nbr of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
