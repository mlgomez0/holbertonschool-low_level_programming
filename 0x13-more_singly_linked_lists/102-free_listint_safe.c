#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *free_listint_safe - free the memory space in a linked list
 *@h: head of the linked list
 *Return: returns the number of nodes
 */

size_t free_listint_safe(listint_t **h)
{

	listint_t *tmp;
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		if ((*h)->next >= *h)
		{
			*h = NULL;
			return (i + 1);
		}
		tmp = (*h)->next;
		free(*h);
		*h  = tmp;
		i++;
	}
	*h = NULL;
	return (i);
}
