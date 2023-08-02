#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free listint_t
 * @head: head of list
 * Return: NULL on error
 */

void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head != NULL)
	{
		nxt = head->nxt;
		free(head);
		head = nxt;
	}
}
