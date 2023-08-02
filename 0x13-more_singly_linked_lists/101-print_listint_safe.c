#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * realo - relocates mem for arr of ptr
 * @list: list to apnd
 * @size: size of nw list
 * @new: nod to add to list
 * Return: ptr
 */

const listint_t **_realo(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nwlist;
	size_t j;

	nwlist = malloc(size * sizeof(listint_t *));
	if (nwlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		nwlist[j] = list[j];
	nwlist[j] = new;
	free(list);
	return (nwlist);
}

/**
 * print_listint_safe - prt listint_t
 * @head: ptr to strt of lst
 * Return: num of node in lst
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, x = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < x; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (x);
			}
		}
		x++;
		list = _realo(list, x, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (x);
}
