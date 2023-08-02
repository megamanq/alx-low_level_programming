#include "lists.h"

/**
 * sum_listint - sum of data of listint_t
 * @head: ptr to fst node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}

	return (x);
}
