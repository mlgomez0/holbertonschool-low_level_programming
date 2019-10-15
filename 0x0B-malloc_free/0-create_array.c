#include"holberton.h"
#include<stdlib.h>

/**
 *create_array - creates an array of specified size
 *@size: size of the array
 *@c: char to initiate the array
 *Return:a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	i = 0;
	t = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
