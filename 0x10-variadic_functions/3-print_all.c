#include "variadic_functions.h"

/**
 *print_all - prints any type of element passed
 *@format: list that gives the format of each
 */
void print_all(const char * const format, ...)
{
	om_t hps[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};
	int i = 0, j = 0, a = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		switch (a)
		{
			case 1:
				printf(", ");
				break;
		}
		a = 0;

		while (j < 4)
		{
			if (format[i] == hps[j].let)
			{
				a = 1;
				hps[j].fun(list);
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 *print_char - prints a given char
 *@list: char to be printed
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *print_int - prints a given integer
 *@list: int to be printed
 */
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 *print_float - prints a given float
 *@list: float to be printed
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 *print_str - prints a given str
 *@list:string to be printed
 */
void print_str(va_list list)
{
	char *l;

	l = va_arg(list, char *);
	if (l != NULL)
	{
		printf("%s", l);
		return;
	}
	printf("(nil)");
}
