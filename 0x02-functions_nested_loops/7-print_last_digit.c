#include "main.h"
/**
 * print_last_digit - Print the last digit
 * @num: integer
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
		last = -1 * (num % 10);
	else
		last = (num % 10);
	_putchar(last + '0');
	return (last);
}
