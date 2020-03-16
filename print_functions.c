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
/**
 * print_int - prints an integer
 * @i: the integer to print
 * Return: number of digits printed
 */
int print_int(va_list i)
{
	int countdig = 0;
	int x[10];
	int count1, rang, n, sum;

	n = va_arg(i, int);

	rang = 1000000000;
	x[0] = n / rang;

	for (count1 = 1; count1 < 10; count1++)
	{
		rang = rang / 10;
		x[count1] = (n / rang) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		countdig++;

		for (count1 = 0; count1 < 10; count1++)
		{
			x[count1] *= -1;
		}

	}
	for (count1 = 0, sum = 0; count1 < 10; count1++)
	{
		sum += x[count1];

		if (sum != 0 || count1 == 9)
		{
			_putchar(x[count1] + '0');
			countdig++;
		}
	}
	return (countdig);
}
/**
 * print_dec - prints a decimal number
 * @d: the decimal number to print
 * Return: number of digits printed
 */
int print_dec(va_list d)
{
	int x[10];
	int count1;
	int countdig = 0;
	int n, rang, sum;

	rang = 1000000000;
	n = va_arg(d, int);

	x[0] = n / rang;

	for (count1 = 1; count1 < 10; count1++)
	{
		rang /= 10;
		x[count1] = (n / rang) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		countdig++;
		for (count1 = 0; count1 < 10; count1++)
		{
			x[count1] *= -1;
		}
	}
	for (count1 = 0, sum = 0; count1 < 10; count1++)
	{
		sum += x[count1];

		if (sum != 0 || count1 == 9)
		{
			_putchar(x[count1] + '0');
			countdig++;
		}

	}
	return (countdig);
}


