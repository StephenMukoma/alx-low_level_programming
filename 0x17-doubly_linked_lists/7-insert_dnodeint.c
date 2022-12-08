#include "lists.h"
/**
*insert_dnodeint_at_index- add new node
*
*@h: pointer to address of list
*@idx: index of new node
*@n: node to be created
*
*Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *temp2, *newp;
	unsigned int counter = idx, len = 0;

	if (idx == 0)
	{
		newp = add_dnodeint(h, n);
		return (newp);
	}
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < idx)
		return (NULL);

	if (len == idx)
	{
		newp = add_dnodeint_end(h, n);
		return (newp);
	}
	temp = *h;

	while (counter != 1)
	{
		temp = temp->next;
		counter--;
	}
	temp2 = temp->next;
	newp = malloc(sizeof(dlistint_t));
	newp->prev = NULL;
	newp->n = n;
	newp->next = NULL;

	temp->next = newp;
	temp2->prev = newp;
	newp->prev = temp;
	newp->next = temp2;

	return (newp);
}
