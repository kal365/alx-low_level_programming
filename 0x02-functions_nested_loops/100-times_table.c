#include "main.h"
void print_times_table(int n)
{
	int start, time, num1, num2;

	start = 0;

	if (n > 15 || n < 0)
	{
	
	}
	else
	{
		while (start <= n)
		{
			time = 0;

			while (time <= n)
			{
				if (n <= 9)
				{
					if (time == n)
					{
						_putchar(time + '0');
						break;
					}
					else
					{
						_putchar(time + '0');
						_putchar(',');
						_putchar(' ');
					}
				}
				time++;
				if (n > 9)
				{
					if (time < 10)
					{
						_putchar(time + '0');
					}
					else
					{
						num1 = time / 10;
					
						num2 = time % 10;
					
						_putchar(num1 + '0');
						_putchar(num2 + '0');
					}
					if (time != n)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
						break;
				}
			}
			_putchar('\n');
			start++;
	}
}
}
