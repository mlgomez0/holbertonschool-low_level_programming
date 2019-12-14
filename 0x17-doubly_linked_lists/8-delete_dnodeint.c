#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node in a given index
 *@head: head of the list to be evaluate
 *@index: index to be evaluated
 *Return: 1 if it succeed or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;
	unsigned int i = 0, len = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (-1);
	}
	len = dlistint_len1(*head);
	if (index > (len - 1))
		return (-1);
	if (index == 0)
	{
		temp2 = temp->next;
		temp2->prev = NULL;
		free(temp);
		*head = temp2;
		return (1);
	}
	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	if (index == (len - 1))
	{
		temp->prev->next = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp->prev = NULL;
	temp->next = NULL;
	free(temp);
	temp = NULL;
	return (1);
}
/**
 *dlistint_len1 - determine the number of elements of a doubly linked list
 *@h: head of the list to be printed
 *Return: the number of nodes in the list
 */

unsigned int dlistint_len1(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
