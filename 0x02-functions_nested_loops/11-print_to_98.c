#include "main.h"
/**
 * print_to_98 - Print all the number between the given number upto 98
 * @n: integer
 * Return: Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				break;
			printf("%i, ", n);
			n++;
		}
		printf("98");
		printf("\n");
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				break;
			printf("%i, ", n);
			n--;
		}
		printf("98");
		printf("\n");
	}
}
