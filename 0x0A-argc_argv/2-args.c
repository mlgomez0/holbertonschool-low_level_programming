#include <stdio.h>
/**
 * main - prints the argument it receives
 *@argc: number of arguments
 *@argv: array
 *Return:an integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
