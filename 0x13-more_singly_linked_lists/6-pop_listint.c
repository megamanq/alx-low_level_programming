#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delet head of node
 * @head: dbl ptr
 *Return: no return
 */

int pop_listint(listint_t **head)
{
	listint_t *strt;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	strt = *head;
	*head = strt->next;
	i = strt->n;
	free(strt);

	return (i);
}
