#include "lists.h"
/**
*print_dlistint - prints all the elements of a list
*
*@h:pointer to first element on the list
*
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	count++;
	h = h->next;
	}
	return (count);
}
