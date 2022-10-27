#include "lists.h"

/**
*get_nodeint_at_index - return the nth node of a listint_t linked list
*
*@head: list
*@index: index searched for
*
*Return: nth node of linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL && index == '\0')
	{
		return (NULL);
	}

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (NULL);
}
