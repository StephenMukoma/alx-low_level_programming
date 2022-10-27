#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - function that adds node at end of a list
*
*@head: pointer to list
*@n: element to be added
*
*Return: address of the new element , or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

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
	new->next = NULL;

	ptr = *head;

	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);

}
