#include "main.h"
/**
 * print_times_table - time table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int start, count, mult;

	if (n >= 0 && n <=15)
	{
		for (start = 0; start < n; n++)
		{
			for (count = 0; count < n; count++)
			{
				_putchar(',');
				_putchar(' ');

				mult = start * count;

				if (mult <= 9)
					_putchar(' ');
				if (mult <= 99)
					_putchar(' ');

				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
					_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
