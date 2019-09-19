#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: integer value
  */
int main(void)
{
	char m;
	
	for (m = 'a'; m <= 'z'; m++)
		if (m != 'q' && m != 'e')
			putchar(m);
	putchar('\n');

	return (0);
}
