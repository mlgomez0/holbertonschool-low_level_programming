#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"


/**
 *print_all - prints any type of element passed
 *@format: list that gives the format of each
 */

void print_all(const char * const format, ...)
{

	select type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
		};
	va_list list;
	int i = 0, j = 0;
	void (*final)(va_list);

	va_start(list, format);
	while (format[i])
	{
		while (j < 4)
		{
			if (format[i] == type[j].let)
			{
				final = type[j].fun;
				final(list);
				switch (j)
				{
					case 3:
					break;

					default:
						printf(", ");
				}

			}
			j++;
		}
		j = 0;
		i++;

	}
	printf("\n");
	va_end(list);
}

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
void print_str(va_list list)
{
	char *l;

	l = va_arg(list, char *);
	/*printf("%s", l);*/

	if (l != NULL)
	{
		printf("%s", l);
		return;
	}
	printf("nil\n");
}
