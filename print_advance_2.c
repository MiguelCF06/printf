#include "holberton.h"


/**
  * print_hexa_lower - Print integers converted to hexadecimal in lowercase
  * @x: The integer to convert
  * Return: The numbers of chars printed
  */

int print_hexa_lower(va_list x)
{
	char hex[100];
	int argcount = 0, count;
	long int argum = va_arg(x, int), remainder;

	for (count = 0; argum != 0; count++)
	{
		remainder = argum % 16;
		if (remainder < 10)
			hex[count] = 48 + remainder;
		else
			hex[count] = 55 + remainder;
		argum /= 16;
	}
	for (count -= 1; count >= 0; count--)
	{
		if (hex[count] > 64 && hex[count] < 91)
			hex[count] += 32;
		_putchar(hex[count]);
		argcount++;
	}
	return (argcount);
}



/**
  * print_hexa_upper - Print integers converted to hexadecimal in uppercase
  * @X: The integer to convert
  * Return: The numbers of chars printed
  */

int print_hexa_upper(va_list X)
{
	char hex[100];
	int argcount = 0, count;
	long int argum = va_arg(X, int), remainder;

	for (count = 0; argum != 0; count++)
	{
		remainder = argum % 16;
		if (remainder < 10)
			hex[count] = 48 + remainder;
		else
			hex[count] = 55 + remainder;
		argum /= 16;
	}
	for (count -= 1; count >= 0; count--)
	{
		_putchar(hex[count]);
		argcount++;
	}
	return (argcount);
}

/**
  * print_octal - Print integers converted to octal
  * @o: The integer to convert
  * Return: The numbers of chars printed
  */

int print_octal(va_list o)
{
	unsigned int arr[100], argum = va_arg(o, unsigned int);
	int argcount = 0, count;

	if (argum < 8)
	{
		_putchar(argum + '0');
		argcount++;
	}
	else
	{
	for (count = 0; argum > 0; count++)
	{
		arr[count] = argum % 8;
		argum /= 8;
	}
	for (count -= 1; count >= 0; count--, argcount++)
	_putchar(arr[count] + '0');
	}
	return (argcount);
}



/**
  * print_sign_to_unsigned - Print integer converted to unsigned integer
  * @u: The integer to convert
  * Return: The numbers of chars printed
  */

int print_sign_to_unsigned(va_list u)
{
	int countdig = 0;
	int x[10];
	int count1, rang, sum;
	unsigned int n = va_arg(u, int);

	n = (unsigned int)n;
	rang = 1000000000;
	x[0] = n / rang;

	for (count1 = 1; count1 < 10; count1++)
	{
		rang = rang / 10;
		x[count1] = (n / rang) % 10;
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
