#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: integer value
  */
int main(void)
{
	char m;
	char l;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
