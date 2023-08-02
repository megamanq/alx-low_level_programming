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

const listint_t **realo(const listint_t **list, size_t size, const listint_t *new)
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
		newlist[j] = list[j];

	nwlist[i] = new;
	free(list);

	return (nwlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, x = 0;
	const listint_t **lst = NULL;

	while (head != NULL)
	{
		for (j = 0; j < x; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(lst);

				return (x);
			}
		}

		x++;
		lst = realo(lst, x, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(lst);
	return (x);
}
