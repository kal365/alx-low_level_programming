#include "main.h"
/**
 * print_diagonal - print line
 * @n: input integer
 * Return: void
 */
void print_diagonal(int n)
{
	int start, count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (start = 0; start < n; start++)
		{
			for (count = 0; count < start; ++count)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
