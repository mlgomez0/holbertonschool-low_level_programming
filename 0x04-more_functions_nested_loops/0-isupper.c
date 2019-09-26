#include "holberton.h"

/**
 * _isupper - determine if a given integer is a upper case
 *@c:parameter to be evaluated
 *Return:always zero
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
