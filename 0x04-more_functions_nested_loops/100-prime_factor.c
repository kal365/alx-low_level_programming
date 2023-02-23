#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 onsuccess
 */
int main(void)
{
	int start, prime = 0;

	for (start; start < 1231952; start++)
	{
		if (((start % 2) == 0) || ((start % 3) == 0))
			continue;
		prime = start;
	}
	printf("%i\n", prime);
	return (0);
}
