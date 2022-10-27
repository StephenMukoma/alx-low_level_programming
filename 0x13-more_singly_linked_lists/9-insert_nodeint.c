#include "lists.h"

/**
*insert_nodeint_at_index -deletes the node at index of a linked list.
*
*@head: pointer to first element
*@idx: index of the list
*@n: node int
*
*Return: 1 (success), -1 (fail)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL && idx != 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
