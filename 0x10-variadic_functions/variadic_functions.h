#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include<stdio.h>
#include<stdarg.h>

/**
 * struct ops - Struct type
 *
 * @let: char to be evaluated
 * @fun: The function associated
 */


typedef struct ops
{
	char let;
	void (*fun)(va_list);
} om_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_str(va_list list);

#endif
