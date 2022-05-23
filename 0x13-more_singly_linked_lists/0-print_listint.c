#include"lists.h"
#include<stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
i++;
}
return (i);
}
