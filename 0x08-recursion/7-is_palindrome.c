#include "holberton.h"

/**
 *is_palindrome - evaluate if a string is palindrome
 *@s:value to be evaluated
 *Return: integer
 */
int is_palindrome(char *s)
{
	return (_value_palin(s, 0));
}
/**
 *sizestr - calculate the size of a stringe
 *@s:string to be evaluated
 *Return: integer
 */
int sizestr(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + sizestr(s + 1));
}
/**
 *_value_palin - makes recursion to find out the char is palindrome
 *@s:value to be evaluated
 *@a:integer to make interation
 *Return: integer
 */

int _value_palin(char *s, int a)
{
	int m;

	m = sizestr(s) - 1;
	if (s[a] != s[m - a])
	{
		return (0);
	}
	else
	{
		_value_palin(s, a + 1);
		return (1);
	}
}
