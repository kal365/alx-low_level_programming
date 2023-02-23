#include "main.h"
/**
 * more_numbers - print 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int start, count, div;

	for (start = 0; start < 10; start++)
	{
		div = 1;
		for (count = 0; count <= 14; count++)
		{
			_putchar((count / div) + '0');
			if (count == 9)
				div = 10;
			if (count >= 10)
			_putchar((count % 10) + '0');
		}
		_putchar('\n');
	}
}
