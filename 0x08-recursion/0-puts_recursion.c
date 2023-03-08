#include "main.h"
/**
 * _puts_recursion - it prints string with recurssion
 * @s: a char pointer argument
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
