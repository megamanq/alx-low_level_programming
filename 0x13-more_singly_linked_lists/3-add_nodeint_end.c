#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add nod in end of listint_t
  * @head: head of dbl ptr
  * @n: n add list
  * Return: NULL if fail
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tem;

	if (head == NULL)
		return (NULL);

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	tem = *head;

	while (tem->next != NULL)
	{
		tem = tem->next;
	}

	tem->next = nw;

	return (nw);
}
