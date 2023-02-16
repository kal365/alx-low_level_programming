#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char spel;
	float flt;
	long Lint;
	long long int llint;

	printf("Size of a char: %zu byte(s)\n", sizeof(spel));
	printf("Size of an int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long int: %zu byte(s)\n", sizeof(Lint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llint));
	printf("Size of a float: %zu byte(s)\n", sizeof(flt));
	return (0);
}
