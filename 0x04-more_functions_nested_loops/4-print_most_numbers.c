#include "main.h"
/**
 * print_most_numbers - Print num from 0-9 without 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int start;

	for (start = 0; start < 10; start++)
	{
		if ((start == 2) || (start == 4))
			continue;
		_putchar(start + '0');
	}
	_putchar('\n');
}
