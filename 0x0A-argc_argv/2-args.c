#include <stdio.h>
/**
 * main - prints the argument it receives
 *@argc: not used
 *@argv: array
 *Return:an integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
