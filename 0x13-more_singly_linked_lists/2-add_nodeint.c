#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_nodeint - adds a new node to the begging of a given linked list
 *@head: head of the linked list
 *@n: integer to be placed in the memory space
 *Return: a pointer to the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
