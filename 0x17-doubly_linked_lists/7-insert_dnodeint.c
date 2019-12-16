#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node in a given position
 *@h: head of the list to be evaluate
 *@idx: index to be evaluated
 *@n: value for the new node
 *Return: address to the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;
	unsigned int i = 0, len;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len1(*h);
	if (idx > len)
		return (NULL);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	while (idx != i)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = newnode;
	newnode->prev = temp->prev;
	temp->prev = newnode;
	newnode->next = temp;
	return (newnode);
}
/**
 *dlistint_len1 - determine the number of elements of a doubly linked list
 *@h: head of the list to be printed
 *Return: the number of nodes in the list
 */
unsigned int dlistint_len1(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
