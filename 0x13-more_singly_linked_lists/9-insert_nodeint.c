#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert a node in a given position
 *@head:head of the linked list
 *@idx: index to position the new node
 *@n: integer to be added to the new node
 *Return: head with for linked list with new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *tmp;
	listint_t *tmpd;
	listint_t *tmpa;
	listint_t *new_node;
	unsigned int i;

	i = 0;
	tmp = *head;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (tmp == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmpd = tmp->next;
		if (i == idx && i == 0)
		{
			*head = new_node;
			new_node->next = tmp;
			return (new_node);
		}
		if (i == idx)
		{
			tmp = tmpa->next;
			tmpa->next = new_node;
			new_node->next = tmp;
			return (new_node);
		}
		tmpa = tmp;
		tmp  = tmpd;
		i++;
	}
	return (NULL);
}
