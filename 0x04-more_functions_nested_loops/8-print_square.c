#include "main.h"
/**
 * print_square - to print square with hash
 * @size: integer
 * Return: 0 on success
 */
void print_square(int size)
{
	int start, hash;

	start = 0;

	while (start < size)
	{
		hash = 0;
		while (hash < size)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		start++;
	}
}
