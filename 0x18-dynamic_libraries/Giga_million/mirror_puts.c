#include<stdio.h>
#include<unistd.h>

/**
 *inject - prints a text instead of other execution
 */

int printf(const char *format, ...);
int puts(const char *s);

int printf(const char *format, ...)
{
	write(STDOUT_FILENO, "9 8 10 24 75 9\n", 15);
	return (0);
}
int puts(const char *s)
{
	write(STDOUT_FILENO,"Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
