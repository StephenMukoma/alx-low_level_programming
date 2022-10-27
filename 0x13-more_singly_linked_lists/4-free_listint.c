#include "lists.h"
#include <stdlib.h>
/**
*free_listint - function that frees a list
*
*@head: pointer to list
*
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
