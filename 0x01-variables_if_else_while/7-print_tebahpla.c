#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: integer value
  */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);

	putchar('\n');

	return (0);
}
