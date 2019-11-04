#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *free_listint2 - free the memory space in a linked list
 *@head: head of the linked list
 */

void free_listint2(listint_t **head)
{

	listint_t *tmp;
	listint_t *tmpd;

	tmp = *head;

	while (tmp != NULL)
	{
		tmpd = tmp->next;
		free(tmp);
		tmp  = tmpd;
	}
	*head = NULL;
}
