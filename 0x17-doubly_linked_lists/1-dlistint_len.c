#include "lists.h"

/**
 *dlistint_len - determine the number of elements of a doubly linked list
 *@h: head of the list to be printed
 *Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
