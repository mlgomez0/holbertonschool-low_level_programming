#include "holberton.h"

/**
 *_isdigit - determine if a given integer is a digit
 *@c:parameter to be evaluated
 *Return:always zero or one
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
