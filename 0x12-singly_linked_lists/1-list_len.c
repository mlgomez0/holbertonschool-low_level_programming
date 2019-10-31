#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *list_len - returns the # of elements of given singly linked list
 *@h: head of the singly linked list
 *Return: the number of nodes of the list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
