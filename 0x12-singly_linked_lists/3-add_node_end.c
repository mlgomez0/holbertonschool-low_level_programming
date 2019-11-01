#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end - adds a new node to the end  of a given linked list
 *@head: head of the linked list
 *@str: string to be placed in the memory space
 *Return: a pointer to the new head
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new_node;
	list_t *tmp;

	i = 0;
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	new_node->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	return (*head);
}
