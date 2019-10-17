#include"holberton.h"
#include<stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 *@s1:string to pass to a memory location
 *@s2:string to concatenate to string 1
 *@n:number of bytes to concatenate of string s2
 *Return:A pointer to the asigned memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, m;


	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	p = malloc(sizeof(char) * (i + n + 1));
		if (p == NULL)
			return (NULL);

	for (m = 0; m < i; m++)
	{
		p[m] = s1[m];

	}
	for (; m < (i + n) && s2[m - i] != '\0'; m++)
	{
		p[m] = s2[m - i];
	}
	p[m] = '\0';
	return (p);
}
