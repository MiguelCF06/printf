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
int print_int(va_list i);
int print_dec(va_list d);
int print_revstr(va_list r);
int print_strnonprint(va_list S);
int print_rot13(va_list R);
int print_binary(va_list b);
int print_sign_to_unsigned(va_list u);
int print_octal(va_list o);
#endif
