#include "lists.h"

/**
 *print_inv - prints all the elements of a doubly linked list
 *@h: head of the list to be printed
 *Return: the number of nodes in the list
 */

void print_inv(const dlistint_t *h)
{
	if (h == NULL)
		return;
	while (h->next)
		h = h->next;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
}
