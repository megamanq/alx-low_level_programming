#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t
 * @h: head ptr
 * Return: nbr of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *tem;

	for (i = 0, tem = h; tem; i++)
	{
		tem = tem->next;
	}
	return (i);
}
