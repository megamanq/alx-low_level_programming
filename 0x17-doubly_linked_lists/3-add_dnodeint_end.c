#include "lists.h"

/**
 * add_dnodeint_end - adds a new
 * node at the end of a dlistint_t list
 * @head: ptr to head
 * @n: nbr int
 * Return: ptr to newnode or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;

	return (new);
}
