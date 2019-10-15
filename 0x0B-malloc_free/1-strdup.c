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
	while (str[i])
	{
		i++;
	}

	if (i == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	t = (char *) malloc(i * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		t[j] = str[j];
	}
	return (t);
}
