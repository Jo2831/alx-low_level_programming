#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *find_common_node - finds a common node in a looped linked list
 *@hare:faster incrementing pointer
 *@tortoise:slower pointer
 *Return:address to common node,NULL otherwise
 */
listint_t *find_common_node(listint_t *hare, listint_t *tortoise)
{
	while (hare && tortoise && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
			return (tortoise);
	}
	return (NULL);
}
/**
 *find_listint_loop - finds an occurrence of  loop in a list and returns
 *head node
 *@head:pointer to listint node
 *Return:pointer to head if true,NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	tortoise = find_common_node(hare, tortoise);
	if (tortoise == NULL)
		return (NULL);
	hare = head;
	while (hare != tortoise)
	{
		hare = hare->next;
		tortoise = tortoise->next;
	}
	return (hare);
}

