#include"holberton.h"
#include<stdlib.h>

/**
 *_calloc - function that allocate memory for an array
 *@nmemb:number of elements of the array
 *@size:size of the elements in the array in bytes
  *Return:A pointer to the asigned memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int m;


	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);


	for (m = 0; m < (nmemb * size); m++)
	{
		p[m] = 0;
	}
	return (p);
}
