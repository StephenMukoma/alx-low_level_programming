#include "lists.h"

/**
*pop_listint - function that deletes the head node of a listint_t linked list
*
*@head: pointer to list
*
*Return: 0 if list is empty: data removed
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	ptr = *head;

	i = ptr->n;

	*head = ptr->next;
	free(ptr);

	return (i);
}
