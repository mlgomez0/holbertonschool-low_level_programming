#ifndef VARIADIC
#define VARIADIC
#include<stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct type
{
	char let;
	void (*fun)(va_list);
} select;
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_str(va_list list);

#endif
