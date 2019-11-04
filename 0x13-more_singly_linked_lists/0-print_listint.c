#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *print_listint - prints a given singly linked list
 *@h: head of the singly linked list
 *Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
