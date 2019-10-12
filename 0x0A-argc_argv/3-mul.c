#include <stdio.h>
/**
 * main - multiplies two arguments
 *@argc: number of argumens
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
