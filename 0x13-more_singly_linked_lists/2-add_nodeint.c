#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add nod in begin of listint_t
  * @head: head of dbl ptr
  * @n: n add list
  * Return: NULL if fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	if (head == NULL)
		return (NULL);

	pt = malloc(sizeof(listint_t));

	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;
	*head = pt;

	return (pt);
}
