#include "main.h"
/**
 * _puts - To print output in stdout
 * @str: pointer to char
 * Return: void
 */
void _puts(char *str)
{
	char temp;

	while (*str != '\0')
	{
		temp = *str;
		_putchar(temp + '\0');
		str++;
	}
	_putchar('\n');
}
