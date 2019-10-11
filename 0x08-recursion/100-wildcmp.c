#include "holberton.h"

/**
 *wildcmp - evaluate if a string is identical to other
 *@s1:string to be evaluated
 *@s2:other string to compare
 *Return: integer
 */
int wildcmp(char *s1, char *s2)
{
	int m;
	int k;
	int l;

	m = sizestr(s1) - 1;
	k = sizestr(s2) - 1;
	l = _first_eval(s1, s2, m);
	if (l == 2)
		return (1);
	if (l == 1)
		return (0);
	return (second_val(s1, s2, m, k, 0, 0));
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
 *_first_eval - evaluates if the two strings are equal
 *@s1:string to be evaluated
 *@s2:string to be evaluated
 *@m: size of one string
 *Return: integer
 */

int _first_eval(char *s1, char *s2, int m)
{

	if (s2[m] == '*')
		return (0);
	if (s1[m] != s2[m])
		return (1);

	if (s1[m] == s2[m] && m >= 0)
		_first_eval(s1, s2, m - 1);

	return (2);
}
/**
 *second_val - compared two strings with the * character
 *@s1:string to evaluate
 *@s2:string to be evaluated
 *@m:size of string 1
 *@k:size of string 2
 *@i:integer
 *@j:integer
 *Return: integer
 */
int second_val(char *s1, char *s2, int m, int k, int i, int j)
{
	if (s1[i] == s2[j] && s2[j] != '*')
	{
		i++;
		j++;
	}
	if (s2[j] == '*')
		j++;
	if (s1[i] != s2[j] && s2[j - 1] == '*')
		i++;
	if (s1[i] != s2[j] && s2[j - 1] != '*')
		return (0);
	if (i == m && j == k)
		return (1);
	second_val(s1, s2, m, k, i, j);
	return (1);
}
