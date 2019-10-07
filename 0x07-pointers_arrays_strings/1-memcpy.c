#include"holberton.h"

/**
 *_memcpy - fill a given memory space with a determined parameter
 *@dest:pointer with address to memory
 *@src:elements to copy in tbe memory space
 *@n:number of time the elements should be passed the to memory place
 *Return:pointer to the memory place were new elements were added.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
