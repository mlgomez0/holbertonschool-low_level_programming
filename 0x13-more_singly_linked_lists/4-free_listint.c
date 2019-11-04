#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *free_listint - free the memory space in a linked list
 *@head: head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head  = tmp;
	}
	free(head);
}
