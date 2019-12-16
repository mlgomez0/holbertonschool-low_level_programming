#include"holberton.h"

/**
 *_strstr - compare one string to other to find a substring
 *@haystack:string to be scanned
 *@needle: accept: string to compare with
 *Return:address of first coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);

		}
		i++;
	}
	return (0);
}
