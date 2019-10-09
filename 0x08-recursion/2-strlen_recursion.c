#include"holberton.h"

/**
 *_strlen_recursion - prints the lenght of a given chart
 *@s:array to be printed
 *Return: integer
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
