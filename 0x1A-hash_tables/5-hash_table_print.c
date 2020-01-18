#include "hash_tables.h"

/**
 *hash_table_print- prints a hash table
 *@ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{

	hash_node_t *temp = NULL;
	unsigned long int i;
	int flag_1 = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (flag_1 != 0)
					printf(", ");
				flag_1 = 1;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
