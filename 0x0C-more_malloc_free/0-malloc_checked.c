#include"holberton.h"
#include<stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b:times the size of the memory to be allocated
 *Return:A pointer to the asigned memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
