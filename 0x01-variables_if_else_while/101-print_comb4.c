#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2,num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = 1; num2 < 9; num2++)
		{
			for (num3 = 2; num3 < 10; num3++)
			{
				if (num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
				}
				else
				{
					continue;
				}

				if (num1 + num2 + num3 == 24)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
