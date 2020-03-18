#include "holberton.h"

/**
  * print_hexa_lower - Print integers converted to octal
  * @x: The integer to convert
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

/**
  * print_binary - Print integers converted to binary
  * @b: The integer to convert
  * Return: The numbers of chars printed
  */

int print_binary(va_list b)
{
	unsigned int arr[100], argum = va_arg(b, unsigned int);
	int argcount = 0, count;

	if (argum == 0)
	{
		_putchar('0');
		argcount++;
	}
	else
	{
	for (count = 0; argum > 0; count++)
	{
		arr[count] = argum % 2;
		argum /= 2;
	}
	for (count -= 1; count >= 0; count--, argcount++)
	_putchar(arr[count] + '0');
	}
	return (argcount);
}

/**
 * print_revstr - Print a string in reverse
 * @r: The format reverse
 * Return: The number of chars printed
 */

int print_revstr(va_list r)
{
	char *str;
	int count1;
	int count2 = 0;

	str = va_arg(r, char *);

		if (str == NULL)
			str = ")llun(";

	for (count1 = 0; str[count1] != '\0'; count1++)
	{
		;
	}

	for (count1 -= 1; count1 >= 0; count1--)
	{
		_putchar(str[count1]);
			count2++;
	}
	return (count2);
}
/**
 * print_upperhex - Print a char in ascii value in uppercase
 * @c: the character to print
 * Return: The number of chars printed
 */
int print_upperhex(char c)
{
	int count;
	char let = 'A' - ':';
	char x[2];

	x[0] = c / 16;
	x[1] = c % 16;

	for (count = 0; count < 2; count++)
	{
		if (x[count] >= 10)
			_putchar (let + x[count] + '0');
		else
			_putchar (x[count] + '0');
	}
	return (count);
}
/**
 * print_strnonprint - Print a string and a nonprintable char in ascii value
 * @S: The format for String
 * Return: The number of chars printed
 */
int print_strnonprint(va_list S)
{
	unsigned int x;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";

	for (x = 0; str[x]; x++)
	{
		if (str[x] < 32 || str[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_upperhex(str[x]);
		}
		else
		{
			_putchar(str[x]);
			count++;
		}
	}
	return (count);
}
/**
 * print_rot13 - Print a string in rot13 conversion
 * @R: The format for String
 * Return: The number of chars printed
 */
int print_rot13(va_list R)
{
	int countch;
	int cstr;
	char *str;
	int clet;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);

	if (str == NULL)
		str = "(ahyy)";

	for (cstr = 0; str[cstr]; cstr++)
	{
		for (clet = 0; letter[clet]; clet++)
		{
			if (str[cstr] == letter[clet])
			{
				_putchar(rot13[clet]);
				countch++;
				break;
			}
		}
		if (!letter[clet])
		{
			_putchar(str[cstr]);
			countch++;
		}
	}
	return (countch);
}
