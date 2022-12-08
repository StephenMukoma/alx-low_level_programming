#include "lists.h"
/**
*dlistint_len - number of nodes
*
*@h: pointer to list
*
*Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
