#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last;

	last = n % 10;

	if (n > 0)
	{
		if (last > 5)
		{
			printf("Last digit of %i is %i and is greater than 5\n", n, last);
		}
		else if (last == 0)
		{
			printf("Last digit of %i is %i and is 0\n", n, last);
		}
		else ((last < 6) && (last > 0))
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
		}
	}
	else (n < 0)
	{
		if (last > 5)
		{
			printf("Last digit of %i is -%i and is greater than 5\n", n, last);
		}
		else if (last == 0)
		{
			printf("Last digit of %i is -%i and is 0\n", n, last);
		}
		else ((last < 6) && (last > 0))
		{
			printf("Last digit of %i is -%i and is less than 6 and not 0\n", n, last);
		}
	}
	return (0);
}
