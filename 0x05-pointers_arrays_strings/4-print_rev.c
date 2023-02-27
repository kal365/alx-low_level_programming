#include "main.h"
/**
 * print_rev - To reverse input string
 * @s: pointer variable
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len))
		len++;
	len = len - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
