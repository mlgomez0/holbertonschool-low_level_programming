#include "lists.h"

/**
 *sum_dlistint - evaluates the sum of the data of a doubly linked list
 *@head: head of the list to be printed
 *Return: the sum of the data or zero
 */

int sum_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *temp;

	temp = head;
	i = 0;
	if (head == NULL)
		return (0);
	while (temp)
	{
		i = i + temp->n;
		temp = temp->next;
	}
	return (i);
}
