#include "lists.h"
#include <string.h>

/**
*add_node_end - function that adds a new node at the end of a list
*
*@head: pointer to address 
*
*@str: element to be added
*
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointer, *new;

	new = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	pointer  = malloc(sizeof(list_t));

	if (pointer == NULL)
	{
		return (NULL);
	}

	pointer->str = strdup(str);
	pointer->len = strlen(str);
	pointer->next = NULL;

	if (new == NULL)
	{
		*head = pointer;
		return (pointer);
	}

	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = pointer;

	return (pointer);
}
