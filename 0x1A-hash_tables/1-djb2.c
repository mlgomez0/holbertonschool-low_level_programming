#include "hash_tables.h"

/**
 *hash_djb2- creates a hash using the djb2 algorithm
 *@str: key to be evaluated
 *Return: The index of where the key/value has to be added
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
