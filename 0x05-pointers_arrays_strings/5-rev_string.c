#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - modifies a given string in reverse order
 *@s:string to be evaluated
 *Return:An string of character
 */
void rev_string(char *s)
{
	int i, j, m, l, max;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	for (j = max; j >= (max / 2); j--)
	{
		l = max - j;
		m = s[j];
		s[j] = s[l];
		s[l] = m;
	}
}
