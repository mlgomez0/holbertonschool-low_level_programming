#include "lists.h"

/**
 *print_dlistint - prints all the elements of a doubly linked list
 *@h: head of the list to be printed
 *Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
