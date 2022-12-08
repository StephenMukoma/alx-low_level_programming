#include "lists.h"
/**
*get_dnodeint_at_index- returns nth node of a list
*
*@head:
*@index:
*
*Return: nth node 
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (counter == index)
	{
		return (NULL);
	}

	for(counter = 0; counter < index; counter++)
	{
		head = head->next;
	}
	return (head);
}
