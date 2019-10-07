#include"holberton.h"

/**
 *_strspn - compare one string with other to find coincidence
 *@s:string
 *@accept: string to compare with
 *Return:count of bytes of coincidences
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int a;


	i = 0;
	j = 0;
	a = 0;
	while (s[i] != '\0' && s[i] != 32)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
			}
		j++;
		}
		j = 0;
	i++;
	}
	return (a);
}
