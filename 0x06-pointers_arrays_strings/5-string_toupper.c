#include "holberton.h"

/**
 *string_toupper - change the lower case for upper case
 *@s:array to review
 *Return: char
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
