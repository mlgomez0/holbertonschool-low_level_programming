#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: integer value
  */
int main(void)
{
	int m;

	m = '0';
	while (m <= '9')
	{
		putchar(m);
		if (m != '9')
			putchar(44);
			putchar(' ');
		m++;
	}

	putchar('\n');

	return (0);
}
