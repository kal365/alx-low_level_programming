#include "main.h"
/**
 * print_numbers - Printing numbers from 0 -9
 * Return: void
 */
void print_numbers(void)
{
	int start;

	for (start = 0; start < 10; start++)
		_putchar(start + '0');
	_putchar('\n');
}
