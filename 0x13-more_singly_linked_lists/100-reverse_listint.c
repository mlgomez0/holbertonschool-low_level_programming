#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *reverse_listint - reverse a given list
 *@head:head of the linked list
 *Return: a new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmpd, *tmpa;

	tmpa = NULL;
	tmpd = NULL;
	while (*head != NULL)
	{
		tmpd = (*head)->next;
		(*head)->next = tmpa;
		tmpa = (*head);
		(*head) = tmpd;
	}
	*head = tmpa;
	return (*head);
}
