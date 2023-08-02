#include "lists.h"

/**
 * listint_len - num of elem inlinked listint_t
 * @h: head ptr
 * Return: numb of elem
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	h = h->next;
		i++;
	}
	return (i);
}
