#include <stdio.h> 
#define LARGEST 10000000000 
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 0, back1 = 1, first2 = 0, back2 = 2;

	unsigned long int hold1, hold2, hold3;

	int count;

	printf("%lu, %lu, ", back1, back2);

	for (count = 2; count < 98; count++)
	{
		if (back1 + back2 > LARGEST || first2 > 0 || first > 0)
		{
			hold1 = (back1 + back2) / LARGEST;
			hold2 = (back1 + back2) % LARGEST;
			hold3 = first + first2 + hold1;
			first = first2, first2 = hold3;
			back1 = back2, back2 = hold2;
			printf("%lu%010lu", first2, back2);
		}
		else
		{
			hold2 = back1 + back2;
			back1 = back2, back2 = hold2;
			printf("%lu", back2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
