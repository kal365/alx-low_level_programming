#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	int start;

	long int follow1, sum, follow2;

	start = 0;

	follow2 = 0;

	follow1 = 1;

	sum = 1;

	while (start <= 98)
	{
		if (start < 3)
		{
			if (start == 2)
			{
				printf("%i, ", start);
			}
			sum = follow1 + follow2;
			follow2 = follow1;
			follow1 = sum;
			start++;
		}
		if (start == 98)
			printf("%lu", sum);
		else
			printf("%lu, ", sum);
		sum = follow1 + follow2;
		follow2 = follow1;
		follow1 = sum;
		start++;
	}
	printf("\n");
	return (0);
}
