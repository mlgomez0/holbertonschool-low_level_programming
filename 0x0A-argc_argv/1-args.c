#include <stdio.h>
/**
 * main - say the number of arguments
 *@argc: not used
 *@argv: array
 *Return:an integer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
