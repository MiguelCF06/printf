#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * look_forpercent - Look for the correct percent for print
 * @format: the recieve format
 * Return: The correct percent to the function
 */
int (*look_forpercent(const char *format))(va_list)
{
	unsigned int x;

	fmt percent[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_revstr},
		{"S", print_strnonprint},
		{"R", print_rot13},
		{"b", print_binary},
		{"u", print_sign_to_unsigned},
		{"o", print_octal},
		{NULL, NULL}
	};

	for (x = 0; percent[x].ptr != NULL;  x++)
	{
		if (*(percent[x].ptr) == *format)
		{
			break;
		}
	}
	return (percent[x].f);
}
/**
 * _printf - The principal function printf
 * @format: the recieve format
 * Return: Count of chars printed
 */
int _printf(const char *format, ...)
{
	unsigned int countfr = 0, count = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[countfr])
	{
		for (; format[countfr] != '%' && format[countfr]; countfr++)
		{
			_putchar(format[countfr]);
			count++;
		}
		if (!format[countfr])
			return (count);
		f = look_forpercent(&format[countfr + 1]);
		if (f != NULL)
		{
			count += f(list);
			countfr += 2;
			continue;
		}
		if (!format[countfr + 1])
			return (-1);
		_putchar(format[countfr]);
		count++;
		if (format[countfr + 1] == '%')
			countfr += 2;
		else
			countfr++;
	}
	va_end(list);
	return (count);
}
