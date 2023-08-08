#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: ptr to list
 * Return: nbr of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		if (!temp->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}

		count++;
		temp = temp->next;
	}

	return (count);
}
