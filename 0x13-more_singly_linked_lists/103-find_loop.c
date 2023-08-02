#include "lists.h"

/**
 * find_listint_loop - find loop in linkd lst
 * @head: ptr to beginin of lst
 * Return: addr of node whr loop strt , NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *hre;

	tort = hre = head;

	while (tort && hre && hre->next)
	{
		tort = tort->next;
		hre = hre->next->next;
		if (tort == hre)
		{
			tort = head;
			break;
		}
	}
	if (!tort || !hre || !hre->next)
		return (NULL);

	while (tort != hre)
	{
		tort = tort->next;
		hre = hre->next;
	}
	return (hre);
}
