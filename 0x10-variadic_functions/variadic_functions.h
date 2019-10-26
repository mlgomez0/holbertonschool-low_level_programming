#ifndef VARIADIC
#define VARIADIC
#include<stdio.h>
#include<stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
* struct type - Struct type
*
* @let: char to be evaluated
* @fun: The function associated
*/

typedef struct type
{
	char let;
	void (*fun)(va_list);
} select;

#endif
