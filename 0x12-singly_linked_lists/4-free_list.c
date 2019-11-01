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
	list_t *del;

	del = head;

	while (del != NULL)
	{
		tmp = del->next;
		free(del);
		del = tmp;
	}
}
