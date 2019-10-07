#include"holberton.h"

/**
 *_strchr - pointer to the first occurence of a character in string
 *@s:string
 *@c:character to look in string
 *Return:pointer to the memory place were the character is found in string.
 */

char *_strchr(char *s, char c)
{
	unsigned int j;
	unsigned int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
			break;
		}
	}
	return ('\0');
}
