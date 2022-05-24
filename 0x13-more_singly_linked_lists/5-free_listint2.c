#include"lists.h"

/**
 *free_listint2 - remove datacode
 *
 *@head: pointer
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *node;
node = *head;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
node = *head;
*head = (*head)->next;
free(node);
}
}
