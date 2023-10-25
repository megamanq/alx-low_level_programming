#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of
 * a dlistint_t linked
 * @head: ptr to head
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int res;

	if (!head)
	{
		return (0);
	}
	temp = head;
	res = 0;
	while (temp)
	{
		res += temp->n;
		temp = temp->next;
	}
	return (res);
}
