#include "lists.h"


/**
 *get_dnodeint_at_index - evaluates the node for a given index
 *@head: head of the list to be evaluate
 *@index: index to be evaluated
 *Return: the node value or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
	if (head == NULL)
		return (NULL);
	while (i != index)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
