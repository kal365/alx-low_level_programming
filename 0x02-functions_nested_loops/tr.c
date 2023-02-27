#include "main.h"
/**
 * print_times_table - print table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int start, result, count;

	if ((n < 15) && (n > 0))
	{
		for (start = 0; start <= n; start++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (count = 1; count <= n; count++)
			{
				result = count * start;

				if (result <= 9)
					_putchar(result + '0');
				else if (result <= 99)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + 48);
					_putchar((result % 10) + 48);
				}
				if (count != n)
				{
					_putchar(',');
					_putchar(' ');
					if ((count <= 9) && (start <= 9))
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}


