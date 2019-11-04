#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns the nth node of the list
 *@head:head of the linked list
 *@index: the index to be evaluated
 *Return: the data in the specified position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *tmp;
	listint_t *tmpd;
	unsigned int i;

	i = 0;
	tmp = head;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		tmpd = tmp->next;
		tmp  = tmpd;
		i++;
	}
	return (NULL);
}
