#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint - function that adds a new node at the beginning of a list
*
*@head: pointer to list
*@n: element to be added
*
*Return: address of the new element, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (NULL);
	}

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

