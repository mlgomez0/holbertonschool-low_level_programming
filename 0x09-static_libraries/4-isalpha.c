#include<stdio.h>
#include"holberton.h"

/**
 *_isalpha - print if a word is alphabetic case
 *@c: The letter to be checked
 *
 *Return: 1 if letter is alpha  or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
