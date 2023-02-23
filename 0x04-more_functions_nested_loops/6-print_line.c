#include "main.h"
/**
 * print_line - Print line
 * @n: integer
 * Return: void
 */
void print_line(int n)
{
	int start;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (start = 0; start < n; start++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
