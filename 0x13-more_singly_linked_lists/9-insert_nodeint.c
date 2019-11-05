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

	listint_t *tmp, *tmpd, *tmpa, *new_node;
	unsigned int i;

	i = 0;
	if (head == NULL || *head == NULL)
		return (NULL);
	tmp = *head;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	while (i != idx && tmp != NULL)
	{
		tmpa = tmp;
		tmpd = tmp->next;
		tmp = tmpd;
		i++;
	}
	if (i == idx && i == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else if (i == idx)
	{
		tmpd = tmpa->next;
		tmpa->next = new_node;
		new_node->next = tmpd;
		return (new_node);
	}

	return (NULL);
}
