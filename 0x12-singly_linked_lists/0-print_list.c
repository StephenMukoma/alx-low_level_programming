#include "lists.h"

/**
*print_list -  function that prints all the elements of a list
*
*@list_t:
*@h:
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0 ; h; count++)
	{
		printf("%d\n", h->next);
		h = h->next;
	}
	return (count);
}
