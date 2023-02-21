#include <stdio.h>
/**
 * main - Entry Point
 * Return: void
 */

int main(void)
{
	int start, num, sum;

	num = 1024;

	for (start = 0; start < num; start++)
	{
		if ((start % 3 == 0) || (start % 5 == 0))
		{
			sum += start;
		}
	}
	printf("%i\n", sum);
	return (0);
}
