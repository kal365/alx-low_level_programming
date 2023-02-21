#include "main.h"
/**
 * times_table -prints the table
 * Return: void
 */
void times_table(void)
{
	int start, count, mult;

	for (start = 0; start < 10; start++)
	{
		_putchar('0');
	
		for (count = 1; count < 10; count++)
		{
			_putchar(',');
			_putchar(' ');

			mult = start * count;

			if (mult < 10)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
