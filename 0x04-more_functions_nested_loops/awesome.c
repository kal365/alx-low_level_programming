#include "main.h"
/**
 * print_number - print same number
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int start, length, count, div, tmp;

	length = 1;

	if (n == 0)
		_putchar('0');
	else if (n > 0)
	{
		if (n < 10)
			_putchar(n + '0');
		else
		{

			div = 1;
			for (start = 10; start < n;)
			{
				length++;
				div = div * 10;
				start = start * 10;
			}
			tmp = (n / div);
			_putchar(tmp + '0');
			div = div / 10;
			for (count = 1; count < length; count++)
			{
				_putchar((n / div) % 10 + '0');
				div = div / 10;
			}
		}
	}
	else if (n < 0)
	{
		n = n * -1;
		if (n < 10)
		{
			_putchar('-');
			_putchar(n + '0');
		}
		else
		{
			div = 1;
			for (start = 10; start < n;)
			{
				length++;
				div = div * 10;
				start = start * 10;
			}
			tmp = (n / div);
			_putchar('-');
			_putchar(tmp + '0');
			div = div / 10;
			for (count = 1; count < length; count++)
			{
				_putchar((n / div) % 10 + '0');
				div = div / 10;
			}
		}
	}
}
