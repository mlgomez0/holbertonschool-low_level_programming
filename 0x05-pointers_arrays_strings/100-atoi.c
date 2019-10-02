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
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == '0')
		{
			return (0);
		}
		else if ((s[j] <= '9' && s[j] >= '0') || (s[j] == '-'))
		{
			m = write(1, &(s + j), 1);
		}
	}
	return (m);
}
