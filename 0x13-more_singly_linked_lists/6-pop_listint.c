#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *pop_listint - pops and element from a list anytime is called
 *@head:head of the linked list
 *Return: The data of the node that was removed
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp;
	listint_t *tmpd;
	int l;

	l = 0;
	tmp = *head;

	if (tmp != NULL)
	{
		tmpd = tmp->next;
		l = tmp->n;
		free(tmp);
		tmp  = tmpd;
	}
	*head = tmp;

	return (l);
}
