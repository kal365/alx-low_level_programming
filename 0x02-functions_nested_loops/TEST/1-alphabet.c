#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - A function that loop through alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
