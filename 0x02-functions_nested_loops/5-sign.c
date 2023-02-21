#include "main.h"
/**
 * print_sign - Check the numbers sign
 * @n: integer
 * Return: On success 1 if it is lessthan -1 otherwise 0
 *
 */
int print_sign(int n)
{
	char str;

	str = '/';

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (str);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	return (0);
}
