#include "holberton.h"
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
