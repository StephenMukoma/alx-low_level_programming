#include "lists.h"
/**
*free_dlistint - frees a list
*
*@head: pointer to address of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
	temp = head;
	head = head->next;
	free(temp);
	temp = NULL;
	}

}
