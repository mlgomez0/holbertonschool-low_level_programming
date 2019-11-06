#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 *print_listint_safe - prints a given singly linked list
 *@head: head of the singly linked list
 *Return: the number of nodes of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next > head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (i);
			exit(98);
		}
		head = head->next;
		i++;

	}

	return (i);
}
