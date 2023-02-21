#include "main.h"
/**
 * print_alphabet_x10 - A function that will output from a - z ten times in a newline
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num;

	char letter;

	num = 0;

	while (num < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		num++;
	}
}
