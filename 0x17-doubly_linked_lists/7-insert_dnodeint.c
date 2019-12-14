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
	dlistint_t *temp;
	dlistint_t *temp2;
	dlistint_t *newnode;
	unsigned int i;

	i = 0;
	temp = *h;
	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*h == NULL)
		*h = newnode;
	if (idx == 0)
	{
		newnode->next = temp;
		temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (i != idx)
	{
		if (temp->next == NULL)
		{
			temp->next = newnode;
			newnode->prev = temp;
			return (temp);
		}
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	temp = temp2->next;
	temp2->next = newnode;
	newnode->next = temp;
	newnode->prev = temp2;
	return (newnode);
}
