#include <stdio.h>
#include"holberton.h"

/**
 *_atoi - return an integer form a string of characters
 *@s:strings to be evaluated
 *Return:An integer
 */
int _atoi(char *s)
{
	int i, k;
	unsigned int m;

	k = 1;
	m = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			k = k * (-1);
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			m = (m * 10) + (s[i] - '0');
		}
		if (m != 0 && !(s[i] >= '0' && s[i] <= '9'))
		{
			break;
		}
	}
	if (k == -1)
		m = m * k;
	return (m);
}
