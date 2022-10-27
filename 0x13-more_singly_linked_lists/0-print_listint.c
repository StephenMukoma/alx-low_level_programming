#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_listint - function that prints all the elements of a list
*
*@h: pointer to first element in string
*
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);

}
