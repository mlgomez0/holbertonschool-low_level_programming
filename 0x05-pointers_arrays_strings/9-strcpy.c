#include <stdio.h>
#include"holberton.h"

/**
 *_strcpy - copies the string pointed to by src the pointed by dest
 *@dest:destination pointer
 *@src:origin pointer
 *Return:A pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
