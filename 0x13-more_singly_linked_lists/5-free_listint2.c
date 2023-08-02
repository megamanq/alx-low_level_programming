#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - func free listint_t
 * @head: dbl ptr of list
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}
}
