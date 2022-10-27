#include "lists.h"

/**
*free_listint2 - function that frees a list
*
*@head: pointer to a list
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
	}

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
