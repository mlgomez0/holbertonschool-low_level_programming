#include "holberton.h"

/**
 *cap_string - change the lower case for upper case
 *@s:array to review
 *Return: char
 */

char *cap_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i)
	{

		if ((s[j] == 44 || s[j] == 59 || s[j] == 46 || s[j] == 33 ||
				s[j] == 63 || s[j] == 34 || s[j] == 40
				|| s[j] == 41 || s[j] == 123 || s[j] == 125 || s[j] == '\t' ||
				s[j] == 32 || s[j] == '\n') && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
		{
			s[j + 1] = s[j + 1] - 32;
		}
	j++;
	}
	return (s);
}
