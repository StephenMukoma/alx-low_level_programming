#include "lists.h"

/**
*listint_len - function that returns the number of elements in a linked list
*
*@h: pointer to first element of list
*
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

