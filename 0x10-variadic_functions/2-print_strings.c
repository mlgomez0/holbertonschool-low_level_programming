#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 *print_strings - prints strings followed by a new line
 *@separator: how the strings should be separated
 *@n:number of elements to be printed
 *@...:varible parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *element;
	char *l;

	l = "(nil)";
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		element = va_arg(list, char *);

		if (element != NULL)
			l = element;

		if (separator == NULL || i == n - 1)
			printf("%s", l);

		else
			printf("%s%s", l, separator);
	l = "(nil)";
	}
	printf("\n");
	va_end(list);
}
