#include "lists.h"

/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t list
 * @h: header ptr
 * Return: nbr of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i;

	if (!h)
	{
		return (0);
	}

	temp = h;
	i = 0;

	while (temp)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
