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

	listint_t *tmp, *tmpd, *tmpa;
	unsigned int i;
	int l;

	i = 0;
	l = -1;
	tmp = *head;
	while (tmp != NULL)
	{
		tmpd = tmp->next;
		if (i == index && i == 0)
		{
			tmp->next = NULL;
			*head = tmpd;
			free(tmp);
			l = 1;
			return (l);
		}
		else if (i == index)
		{
			tmpa->next = tmp->next;
			tmp->next = NULL;
			free(tmp);
			l = 1;
			return (l);
		}
		tmpa = tmp;
		tmp = tmpd;
		i++;
	}
	return (l);
}
