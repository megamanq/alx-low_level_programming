#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: ptr to head node
 * @str: value of str
 * Return: ptr to new node or null if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNode;

	if (!str)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));
		if (!newNode)
			return (NULL);

	newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next =  newNode;
	}

	return (newNode);
}
