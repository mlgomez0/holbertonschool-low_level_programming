#include "holberton.h"

/**
 *_strncpy - concatenates two strings until n character
 *@dest: destination string
 *@src: Origin string
 *@n: number to stop the concatenation
 *Return: char string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (i = j; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
