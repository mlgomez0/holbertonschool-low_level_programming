#include"holberton.h"
#include<stdlib.h>

/**
 *_strdup - creates a copy of a given array
 *@str: array to be copied
 *Return:a pointer to the array
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *t;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;

	t = (char *) malloc(i * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		t[j] = str[j];
	}
	return (t);
}
