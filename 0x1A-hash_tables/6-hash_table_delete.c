#include "hash_tables.h"

/**
 *hash_table_delete- delets a hash table
 *@ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *temp = NULL;
	unsigned long int i;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			if (temp != NULL)
				free_list_h(temp);
		}
		free(ht->array);
		ht->array = NULL;
		free(ht);
		ht = NULL;
	}
}

/**
 *free_list_h - free the memory space in a linked list
 *@head: head of the linked list
 */

void free_list_h(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head  = tmp;
	}

}
