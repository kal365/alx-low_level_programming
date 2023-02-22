#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	long start, follow1, sum, follow2;

	start = 0;

	follow2 = 2;

	follow1 = 1;

	sum = follow2;

	while (follow1 + follow2 < 4000000)
	{
		follow2 += follow1;

		if (follow2 % 2 == 0)
			sum += follow2;
		follow1 = follow2 - follow1;

		++start;
	}

	printf("%ld\n", sum);
	return (0);
}
