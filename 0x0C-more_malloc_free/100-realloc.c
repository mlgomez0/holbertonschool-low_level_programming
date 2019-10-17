#include"holberton.h"
#include<stdlib.h>

/**
 *_realloc - reallocates a memory block
 *@ptr:string to be reallocated
 *@old_size:the old size to be updated
  *Return:A pointer to the string with new space in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int m;
	unsigned int i;


	if (old_size == new_size)
		return (ptr);
	if (old_size < new_size)
		m = old_size;
	else
		m = new_size;
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);

	for (i = 0; i < m; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
