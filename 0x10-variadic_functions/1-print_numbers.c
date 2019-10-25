#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 *print_numbers - prints numbers followed by a new line
 *@separator: how the numbers should be separated
 *@n:number of elements to be printed
 *@...:varible parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int element;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		element = va_arg(list, unsigned int);
		if (separator == NULL || i == n - 1)
			printf("%d", element);
		else
			printf("%d%s", element, separator);
	}
	 printf("\n");
	va_end(list);
}
