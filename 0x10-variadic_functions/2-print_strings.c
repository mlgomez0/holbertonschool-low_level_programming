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

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		element = va_arg(list, char *);
		if (separator == NULL || i == n - 1)
		{
			if (element == NULL)
				printf("nil");
			printf("%s", element);
		}
		else if (element == NULL)
			printf("nil%s", separator);
		else
			printf("%s%s", element, separator);
	}
	printf("\n");
	va_end(list);
}
