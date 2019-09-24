#include"holberton.h"

/**
 *_islower - print if a word is lower case
 *@c: The letter to be checked
 *
 *Return: 1 if letter is alpha  or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
