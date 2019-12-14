#include "lists.h"


/**
 *free_dlistint - free a doubly linked list
 *@head: head of the list free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *temp2;

	temp = head;
	if (head == NULL)
		return;
	while (temp->next)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	free(temp);
}
