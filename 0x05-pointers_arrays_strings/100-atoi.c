#include <stdio.h>
#include"holberton.h"

/**
 *_atoi - return an integer form a string of characters
 *@s:strings to be evaluated
 *Return:An integer
 */
int _atoi(char *s)
{
	int i, j, m;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		m = m * 10 + (s[j] + '0');
	}
	return (m);
}
