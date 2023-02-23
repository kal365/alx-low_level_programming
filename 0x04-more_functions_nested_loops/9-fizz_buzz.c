#include <stdio.h>
/**
 * main - print 1 to 100; for x3 print 'fizz'
 * for multiple of 5 print 'buzz' for both fizzbuzz
 *
 * Return: 0 on success
 */
int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (((start % 3) == 0) && ((start % 5) == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((start % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if ((start % 5) == 0)
		{
			printf("Buzz");
			if (start != 100)
				printf(" ");
			continue;
		}
		else
			printf("%i ", start);
	}
	printf("\n");
	return (0);
}
