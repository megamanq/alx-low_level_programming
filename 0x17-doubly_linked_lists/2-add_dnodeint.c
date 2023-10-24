#include "lists.h"

/**
 * add_dnodeint - adds a new node at the
 * beginning of a dlistint_t list
 * @head: head of list
 * @n: integr
 * Return: ptr to new nodeor null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (*head);
	}
	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head)
	{
		(*head)->prev = new;
	}

	*head = new;
	return (*head);
}
