#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *sum_listint - returns the sum of all data in a list
 *@head:head of the linked list
 *Return: the sum of data in nodes
 */

int sum_listint(listint_t *head)
{

	listint_t *tmp;
	listint_t *tmpd;
	unsigned int i;
	int l;

	i = 0;
	l = 0;

	tmp = head;
	while (tmp != NULL)
	{
		l = l + tmp->n;
		tmpd = tmp->next;
		tmp  = tmpd;
		i++;
	}
	return (l);
}
