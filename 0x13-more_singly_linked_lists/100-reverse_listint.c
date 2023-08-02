#include "lists.h"

/**
 * reverse_listint - func revrse listint_t
 * @head: dbl ptr
 * Return: ptr to first node of revrsd list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	*head = prev;

	return (*head);
}
