#include "lists.h"
#include <stdlib.h>

/**
*delete_nodeint_at_index - function that deletes the node at index of a linked list.
*
*@head:pointer to first node of list
*@index:index of the node that should be deleted
*
*Return:1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *next;
	unsigned int i;

	new = *head;

	if (index != 0)
	{
		for(i = 0; i < index - 1 && new != NULL; i++)
		{
			new = new->next;
		}
	}

	if (new == NULL || (new->next == NULL && index != 0))
	{
		return (-1);
	}

	next = new->next;

	if (index != 0)
	{
		new->next = next->next;
		free(next);
	}
	else
	{
		free(new);
		*head = next;
	}
	return (1);
}
