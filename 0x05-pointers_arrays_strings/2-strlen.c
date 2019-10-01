#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - determines the lenght of an string
 *@s:string to be evaluated
 *Return: An integer with the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
