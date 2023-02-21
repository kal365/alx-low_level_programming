#include "main.h"
/**
 * print_last_digit - Print the last digit
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;

	if (num >= 0)
	{
		_putchar(last + '0');
	}
	if (num < 0)
	{
		return (last);
	}

	return (0);
}
