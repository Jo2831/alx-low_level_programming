#include"lists.h"
#include"stdio.h"
/**
 *listint_len - return length of element
 *
 *@h: argument pass for function
 *
 *Return: size_t
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
