#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes node at given position
 *@head:head of the linked list
 *@index: index to position to be deleted
 *Return: 1 if success and -1 it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp;
	listint_t *tmpd;
	listint_t *tmpa;
	listint_t *new_node;
	unsigned int i;

	i = 0;
	tmp = *head;

	while (tmp != NULL)
	{

		if (i == idx)
		{
			tmpa->next = tmp->next;
			new_node->next = tmp;
			return (*head);
		}
		tmpa = tmp;
		tmpd = tmp->next;
		tmp  = tmpd;
		i++;


	}

	return (NULL);
}
