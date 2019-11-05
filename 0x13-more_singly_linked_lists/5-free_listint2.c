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

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head  = tmp;
	}
	head = NULL;

}
