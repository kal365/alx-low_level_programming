#include "main.h"
/**
 * print_times_table - print table
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int start, result, count, large1, large2;

	int three1, three2;

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
					large1 = result / 10;
					large2 = result % 10;

					_putchar(large1 + '0');
					_putchar(large2 + '0');
				}
				else if (result > 99)
				{
					large1 = result / 10;

					three1 = large1 / 10;
					three2 = large1 % 10;

					large2 = result % 10;

					_putchar(three1 + '0');
					_putchar(three2 + '0');
					_putchar(large2 + '0');
				}
				if (count != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}


