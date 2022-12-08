#include "lists.h"
/**
*get_dnodeint_at_index- returns nth node of a list
*
*@head: pointer to address of list
*@index: index to return
*
*Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (NULL);
}
