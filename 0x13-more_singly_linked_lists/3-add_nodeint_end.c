#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_nodeint_end - adds a new node to the end  of a given linked list
 *@head: head of the linked list
 *@n: string to be placed in the memory space
 *Return: a pointer to the new head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node;
	listint_t *tmp;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	new_node->n = n;
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
