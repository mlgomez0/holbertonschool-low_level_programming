#include "hash_tables.h"

/**
 *hash_table_get- gets a value for a given key
 *@ht: hash table to add the new node
 *@key: whose value will be retrieved
 *Return: pointer to the char value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *temp = NULL;
	unsigned long int _idx;
	char *empty_str = "\0";

	if (ht == NULL || key == NULL || strcmp(key, empty_str) == 0)
		return (NULL);
	_idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[_idx];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
