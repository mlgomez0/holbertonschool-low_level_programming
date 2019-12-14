#include "lists.h"


/**
 *add_dnodeint_end - add a node to the end of the doubly linked list
 *@head: head of the list to be printed
 *@n: integer to be added to the node
 *Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	 dlistint_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (*head);
}
