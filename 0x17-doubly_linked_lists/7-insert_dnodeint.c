#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given position
 * @h: ptr head
 * @idx: index
 * @n: avalye
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int len;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	temp = *h;
	len = 0;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (idx == len + 1)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	if (idx > len + 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	for (len = 0; len < idx; len++)
		temp = temp->next;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev = new;
	new->prev->next = new;
	return (new);
}
