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
	size_t count = 0;
	const listint_t *list = NULL;

	if (h == NULL)
	{
		return (0);
	}

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (0);
	}

	list = h;

	while (list != NULL)
	{
		if (list->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", list->len, list->str);
		}

		list = list->next;
		count++;
	}
	return (count);
}
