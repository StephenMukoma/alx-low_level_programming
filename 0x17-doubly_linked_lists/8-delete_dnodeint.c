#include "lists.h"
/**
*delete_dnodeint_at_index - insert node at index
*
*@head: pointer to list
*@index: index to insert at
*
*Return: 1 else 0
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (!curr)
		return (-1);

	for (i = 0; i < index && curr; i++)
		curr = curr->next;

	if (!curr)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (*head)
		(*head)->prev = NULL;
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next)
			curr->next->prev = curr->prev;
	}
	free(curr);

	return (1);
}
