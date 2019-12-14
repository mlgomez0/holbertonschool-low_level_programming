#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node in a given index
 *@head: head of the list to be evaluate
 *@index: index to be evaluated
 *Return: 1 if it succeed or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2, *temp1;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL || (*head)->next == NULL)
	{
		*head = NULL;
		return (-1);
	}
	while (temp)
	{
		if (i == 0 && index == 0)
		{
			temp2 = temp->next;
			temp2->prev = NULL;
			free(temp);
			*head = temp2;
			return (1);
		}
		else if (i == index && temp->next != NULL)
		{
			temp1 = temp->next;
			temp2 = temp->prev;
			temp2->next = temp1;
			temp1->prev = temp2;
			free(temp);
			return (1);
		}
		else if (i == index && temp->next == NULL)
		{
			temp1 = temp->prev;
			temp->prev = NULL;
			free(temp);
			temp1->next = NULL;
			temp = NULL;
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
