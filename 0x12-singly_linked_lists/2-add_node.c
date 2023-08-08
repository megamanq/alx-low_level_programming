#include "lists.h"
#include <string.h>

/**
 * add_node - prints all the elements of a list_t
 * @head: ptr to head
 * @str: value of str
 * Return: adress if new elemnt or null if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = strlen(temp->str);

	if (!head)
	{
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
	}

	*head = temp;

	return (*head);
}
