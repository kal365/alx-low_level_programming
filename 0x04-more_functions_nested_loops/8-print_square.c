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

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
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
}
