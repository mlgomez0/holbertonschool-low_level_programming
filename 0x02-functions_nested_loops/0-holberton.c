#include"holberton.h"
/**
 *Main-Prints an string
 *
 *Return- integer zero
 */
int main(void)
{
	char str[] ={'H','o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(str[i]);

	_putchar('\n');
	return (0);

}
