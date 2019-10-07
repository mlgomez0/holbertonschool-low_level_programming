#include"holberton.h"

/**
 *_strchr - pointer to the first occurence of a character in string
 *@s:string
 *@c:character to look in string
 *Return:pointer to the memory place were the character is found in string.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	i++;
	}
	return ('\0');
}
