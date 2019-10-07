#include"holberton.h"

/**
 *_strpbrk - compare one string with other to find address of first coincidence
 *@s:string
 *@accept: string to compare with
 *Return:address of first coincidence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != 32)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);

			}
			j++;
		}
		j = 0;
	i++;
	}
	return ('\0');
}
