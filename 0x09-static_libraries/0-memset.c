#include"holberton.h"

/**
 *_memset - fill a given memory space with a determined parameter
 *@s:pointer with address to memory
 *@b:elements to be put in the memory space
 *@n:number of time the elements should be passed the to memory place
 *Return:pointer to the memory place were new elements were added.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
