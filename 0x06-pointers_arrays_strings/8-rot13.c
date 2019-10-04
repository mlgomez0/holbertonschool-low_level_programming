#include "holberton.h"

/**
 *rot13 - encodes a string into rot13
 *@s:array to review
 *Return: char
 */

char *rot13(char *s)
{
	int i, j;
	char inp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z'};
	char out[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == inp[j])
			{
				s[i] = out[j];
				break;
			}
		}
	}
	return (s);
}
