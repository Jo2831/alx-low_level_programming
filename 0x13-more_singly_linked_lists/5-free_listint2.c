#include"lists.h"


void free_listint2(listint_t **head)
{
        listint_t *current;
	
        if (head == NULL)
            return;

        while (*head != NULL)
        {
            current = *head;
            *head = (*head)->next;
            free(current);
        }
}