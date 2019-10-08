#include"holberton.h"

/**
 *set_string - set value of a pointer to a char
 *@s:pointer to a pointer
 *@to:char
 *Return:void
 */

void set_string(char **s, char *to)
{
	int i;

	i = 0;
	while (*(to + i) != '\0')
	{
		*(*(s + i)) = *(to + i);
		i++;
	}
	while (*(*(s + i)) != '\0')
	{
		*(*(s + i)) = '\0';
		i++;
	}
}
