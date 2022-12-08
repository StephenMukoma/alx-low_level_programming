#include "lists.h"
/**
*add_dnodeint - adds new node at beginning of list
*
*@head: pointer to first element on list
*@n: data to be added
*
*Returns: address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;

	return (temp);
}
