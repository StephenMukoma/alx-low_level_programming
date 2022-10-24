#include "lists.h"

/**
*list_len - function that returns the number of elements in a linked list
*
*@h: pointer to first element on the list
*
*Return: Number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *list;

	if (h == NULL)
	{
		return (0);
	}

	list = malloc(sizeof(list_t));

	if (list == NULL)
	{
		return (0);
	}

	list = h;
	while (list != NULL)
	{
		list = list->next;
		elements++;
	}

	return (elements);



}
