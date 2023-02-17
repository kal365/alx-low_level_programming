#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1;

	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 1; num2 > 10; num2++)
		{
			if (num1 == num2)
			{
				continue;
			}
			else
			{

				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(',');
				putchar(' ');
			}
			num2--;
		}
	}
	putchar('\n');
	return (0);
}
