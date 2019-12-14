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
	unsigned int i;

	if (h == NULL  || (*h == NULL && idx != 0))
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
	for (i = 0; i != idx; i++)
	{
		if (temp->next == NULL)
		{
			if (i == (idx - 1))
			{
				temp->next = newnode;
				newnode->prev = temp;
				return (newnode);
			}
			else
				return (NULL);
		}
		temp = temp->next;
	}
	temp->prev->next = newnode;
	newnode->prev = temp->prev;
	temp->prev = newnode;
	newnode->next = temp;
	return (newnode);
}
