#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_char - Print characters
 * @c: type data
 * Return: always 1
 */
int print_char(va_list c)
{
	char caracter = (char)va_arg(c, int);

	_putchar(caracter);
	return (1);
}
/**
 * print_str - prints a string
 * @s: the string to print
 * Return: number of characters printed
 */
int print_str(va_list s)
{
	unsigned int x;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (x = 0; str[x]; x++)
	{
		_putchar(str[x]);
	}
	return (x);
}
