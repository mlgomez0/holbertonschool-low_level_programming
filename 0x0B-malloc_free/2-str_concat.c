#include"holberton.h"
#include<stdlib.h>

/**
 *str_concat - Concatenate two strings
 *@s1: First string
 *@s2: Second string
 *Return:a pointer to the concatenated array
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	char *t;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	j++;

	t = (char *) malloc((i + j) * sizeof(char));
	for (k = 0; k < i; k++)
	{
		t[k] = s1[k];
	}
	for (l = 0; l <= j; l++)
	{
		t[i + l] = s2[l];
	}
	return (t);
}
