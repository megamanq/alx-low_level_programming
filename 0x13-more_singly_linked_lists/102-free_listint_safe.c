#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reallo - reallocates memory for an array of pointers
 * @list: list to append
 * @size: size of new list
 * @new: node to add to list
 * Return: ptr to list
 */
listint_t **reallo(listint_t **list, size_t size, listint_t *new)
{
	listint_t **nwlist;
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
 * free_listint_safe - free listint_t
 * @head: dbl ptr to start of list
 * Return: num of nodes in list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t j, x = 0;
	listint_t **lst = NULL;
	listint_t *nxt;

	if (head == NULL || *head == NULL)
		return (x);

	while (*head != NULL)
	{
		for (j = 0; j < x; j++)
		{
			if (*head == lst[j])
			{
				*head = NULL;
				free(lst);

				return (x);
			}
		}
		x++;
		lst = reallo(lst, x, *head);
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}

	free(lst);

	return (x);
}
