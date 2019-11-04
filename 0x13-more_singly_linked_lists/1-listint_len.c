#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *listint_len - returns the leng of the linked list
 *@h: head of the singly linked list
 *Return: the number of nodes of the list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
