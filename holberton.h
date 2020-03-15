#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct formats - Struct of the different formats of printf
 *
 * @ptr: The operator
 * @f: The function associated
 */

typedef struct formats
{
	char *ptr;
	int (*f)(va_list);
} fmt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);

#endif
