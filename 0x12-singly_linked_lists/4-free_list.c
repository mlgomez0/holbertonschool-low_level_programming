#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *free_list - free the memory space in a linked list
 *@head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head  = tmp;
	}
	free(head);
}
