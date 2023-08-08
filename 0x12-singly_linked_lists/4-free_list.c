#include "lists.h"

/**
 * free_list - free a list
 * @head: adress of list
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *curent, *next;

	if (!head)
	{
		return;
	}

	curent = next = head;

	while (next)
	{
		next = curent->next;
		free(curent->str);
		free(curent);
		curent = next;
	}
}
